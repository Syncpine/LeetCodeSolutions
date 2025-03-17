class Solution {
public:
    int countPairs(const std::vector<int>& nums, const int k)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        int total = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            for(jj = ii + 1; jj < numsSize; ++jj)
            {
                if(nums[ii] == nums[jj])
                {
                    int tmp = ii * jj;
                    if(tmp % k == 0)
                    {
                        ++total;
                    }
                }
            }
        }

        return total;
    }
};