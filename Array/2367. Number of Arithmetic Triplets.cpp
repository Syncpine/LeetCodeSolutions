class Solution {
public:
    int arithmeticTriplets(const std::vector<int>& nums, const int diff)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;
        int kk = 0;

        int total = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            for(jj = ii + 1; jj < numsSize; ++jj)
            {
                if(nums[jj] - nums[ii] != diff)
                {
                    continue;
                }

                for(kk = jj + 1; kk < numsSize; ++kk)
                {
                    if(nums[kk] - nums[jj] == diff)
                    {
                        ++total;
                        break;
                    }
                }
            }
        }

        return total;
    }
};