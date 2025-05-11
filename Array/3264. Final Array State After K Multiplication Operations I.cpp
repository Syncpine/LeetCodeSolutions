class Solution {
public:
    std::vector<int> getFinalState(std::vector<int>& nums, int k, const int multiplier)
    {
        const int numsSize = nums.size();
        int index = 0;

        int minIndex = 0;

        while(k > 0)
        {
            minIndex = 0;

            for(index = 0; index < numsSize; ++index)
            {
                if(nums[index] < nums[minIndex])
                {
                    minIndex = index;
                }
            }

            nums[minIndex] = nums[minIndex] * multiplier;

            --k;
        }

        return nums;
    }
};