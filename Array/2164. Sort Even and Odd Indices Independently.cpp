class Solution {
public:
    std::vector<int> sortEvenOdd(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < numsSize; ii += 2)
        {
            for(jj = ii + 2; jj < numsSize; jj += 2)
            {
                if(nums[ii] > nums[jj])
                {
                    std::swap(nums[ii], nums[jj]);
                }
            }
        }

        for(ii = 1; ii < numsSize; ii += 2)
        {
            for(jj = ii + 2; jj < numsSize; jj += 2)
            {
                if(nums[ii] < nums[jj])
                {
                    std::swap(nums[ii], nums[jj]);
                }
            }
        }

        return nums;
    }
};