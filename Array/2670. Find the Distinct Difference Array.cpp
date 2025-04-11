#include <map>

class Solution {
public:
    std::vector<int> distinctDifferenceArray(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        std::map<int, int> mapLeftNums;
        std::map<int, int> mapRightNums;

        for(index = 0; index < numsSize; ++index)
        {
            if(mapRightNums.end() == mapRightNums.find(nums[index]))
            {
                mapRightNums.insert( { nums[index], 1 } );
                mapLeftNums.insert( { nums[index], 0 } );
            }
            else
            {
                ++mapRightNums[nums[index]];
            }
        }

        std::vector<int> answer(numsSize, 0);

        int leftSum = 0;
        int rightSum = 0;

        for(index = 0; index < numsSize; ++index)
        {
            leftSum = 0;
            rightSum = 0;

            ++mapLeftNums[nums[index]];
            --mapRightNums[nums[index]];

            for(auto itor : mapLeftNums)
            {
                if(itor.second != 0)
                {
                    ++leftSum;
                }
            }

            for(auto itor : mapRightNums)
            {
                if(itor.second != 0)
                {
                    ++rightSum;
                }
            }

            answer[index] = leftSum - rightSum;
        }

        return answer;
    }
};