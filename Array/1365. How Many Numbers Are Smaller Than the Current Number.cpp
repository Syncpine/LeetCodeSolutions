class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        std::vector<int> retNums(numsSize, 0);

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            for(jj = 0; jj < numsSize; ++jj)
            {
                if(nums[ii] > nums[jj])
                {
                    ++retNums[ii];
                }
            }
        }

        return retNums;
    }
};