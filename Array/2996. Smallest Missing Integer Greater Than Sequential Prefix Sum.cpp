class Solution {
public:
    int missingInteger(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        int prefixSum = nums[0];

        for(index = 1; index < numsSize; ++index)
        {
            if(nums[index - 1] + 1 == nums[index])
            {
                prefixSum += nums[index];
            }
            else
            {
                break;
            }
        }

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
            if(setNums.end() == setNums.find(prefixSum))
            {
                return prefixSum;
            }

            ++prefixSum;
        }
    }
};