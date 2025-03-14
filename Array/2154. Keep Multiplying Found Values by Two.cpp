class Solution {
public:
    int findFinalValue(const std::vector<int>& nums, int original)
    {
        std::set<int> setNums;

        for(auto num : nums)
        {
            if(setNums.end() == setNums.find(num))
            {
                setNums.insert( num );
            }
        }

        while(true)
        {
            if(setNums.end() == setNums.find(original))
            {
                return original;
            }

            original = 2 * original;
        }

        return original;
    }
};