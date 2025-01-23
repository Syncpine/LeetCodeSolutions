#include <algorithm>

class Solution {
public:
    std::vector<int> minSubsequence(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        const int numsSize = nums.size();
        int index = 0;

        int sum = 0;

        while(index < numsSize)
        {
            sum += nums[index];
            ++index;
        }

        int sum_2 = sum / 2 + 1;

        std::vector<int> retVec;
        sum = 0;

        index = numsSize - 1;

        while(index >= 0)
        {
            sum += nums[index];
            retVec.push_back(nums[index]);

            if(sum >= sum_2)
            {
                break;
            }

            --index;
        }

        return retVec;
    }
};