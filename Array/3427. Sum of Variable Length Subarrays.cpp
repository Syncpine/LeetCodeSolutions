class Solution {
public:
    int subarraySum(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        int total = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            int pos = std::max(0, ii - nums[ii]);

            for(jj = pos; jj <= ii; ++jj)
            {
                total += nums[jj];
            }
        }

        return total;
    }
};