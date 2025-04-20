class Solution {
public:
    bool hasTrailingZeros(const std::vector<int>& nums)
    {
        int count = 0;

        for(auto num : nums)
        {
            if(num % 2 == 0)
            {
                ++count;
            }
        }

        return count >= 2;

    }
};