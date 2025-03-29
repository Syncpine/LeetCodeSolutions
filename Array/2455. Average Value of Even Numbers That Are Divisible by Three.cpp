class Solution {
public:
    int averageValue(const std::vector<int>& nums)
    {
        int total = 0;
        int n = 0;

        for(auto num : nums)
        {
            if(num % 2 == 0 && num % 3 == 0)
            {
                total += num;
                ++n;
            }
        }

        if(n == 0)
        {
            return 0;
        }

        return total / n;
    }
};