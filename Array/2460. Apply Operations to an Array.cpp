class Solution {
public:
    std::vector<int> applyOperations(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;

        for(ii = 0; ii < numsSize - 1; ++ii)
        {
            if(nums[ii] == nums[ii + 1])
            {
                nums[ii] = nums[ii] * 2;
                nums[ii + 1] = 0;
            }
        }

        std::vector<int> retNums(numsSize, 0);

        ii = 0;
        int jj = 0;

        while(ii < numsSize)
        {
            if(nums[ii] != 0)
            {
                retNums[jj] = nums[ii];
                ++jj;
            }

            ++ii;
        }

        return retNums;
    }
};