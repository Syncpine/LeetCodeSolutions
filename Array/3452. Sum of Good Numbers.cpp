class Solution {
public:
    int sumOfGoodNumbers(const std::vector<int>& nums, const int k)
    {
        const int numsSize = nums.size();

        int index = 0;

        int total = 0;

        for(index = 0; index < numsSize; ++index)
        {
            if(index - k < 0)
            {
                if(nums[index] > nums[index + k])
                {
                    total += nums[index];
                }

                continue;
            }

            if(index + k >= numsSize)
            {
                if(nums[index - k] < nums[index])
                {
                    total += nums[index];
                }

                continue;
            }

            if(nums[index - k] < nums[index] && nums[index] > nums[index + k])
            {
                total += nums[index];
            }
        }

        return total;
    }
};