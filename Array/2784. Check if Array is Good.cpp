class Solution {
public:
    bool isGood(const std::vector<int>& nums)
    {
        const int n = nums.size();

        std::vector<int> base(n, 0);

        for(auto num : nums)
        {
            if(num > n - 1)
            {
                return false;
            }

            ++base[num];
        }

        int index = 0;

        for(index = 1; index < n - 1; ++index)
        {
            if(base[index] != 1)
            {
                return false;
            }
        }

        if(base[n - 1] != 2)
        {
            return false;
        }

        return true;
    }
};