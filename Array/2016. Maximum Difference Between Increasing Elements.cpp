class Solution {
public:
    int maximumDifference(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        int maxDiff = -1;

        for(ii = 0; ii < numsSize; ++ii)
        {
            for(jj = ii + 1; jj < numsSize; ++jj)
            {
                if(nums[ii] < nums[jj])
                {
                    int diff = nums[jj] - nums[ii];
                    maxDiff = std::max(diff, maxDiff);
                }
            }
        }

        return maxDiff;
    }
};