class Solution {
public:
    int dominantIndex(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        std::vector<int> vecIndex(2, 0);

        for(ii = 0; ii < 2; ++ii)
        {
            int kk = ii;

            for(jj = ii + 1; jj < numsSize; ++jj)
            {
                if(nums[jj] > nums[kk])
                {
                    kk = jj;
                }
            }

            std::swap(nums[ii], nums[kk]);
            vecIndex[ii] = kk;
        }

        return (nums[0] >= nums[1] * 2) ? vecIndex[0] : -1;
    }
};