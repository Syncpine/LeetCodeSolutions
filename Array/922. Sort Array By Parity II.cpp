class Solution {
public:
    std::vector<int> sortArrayByParityII(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            jj = ii;

            while(jj < numsSize)
            {
                if(nums[jj] % 2 == 0)
                {
                    break;
                }

                ++jj;
            }

            std::swap(nums[ii], nums[jj]);

            ++ii;

            jj = ii;

            while(jj < numsSize)
            {
                if(nums[jj] % 2 == 1)
                {
                    break;
                }

                ++jj;
            }

            std::swap(nums[ii], nums[jj]);
        }

        return nums;
    }
};