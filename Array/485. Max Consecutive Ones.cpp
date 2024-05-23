class Solution {
public:
    int findMaxConsecutiveOnes(const std::vector<int>& nums)
    {
        auto curMaxCount = 0;
        auto curCount = 0;

        for(auto num : nums)
        {
            if(0 == num)
            {
                if(0 != curCount)
                {
                    curMaxCount = std::max(curMaxCount, curCount);
                    curCount = 0;
                }

                continue;
            }

            ++curCount;
        }

        if(0 != curCount)
        {
            curMaxCount = std::max(curMaxCount, curCount);
        }

        return curMaxCount;
    }
};