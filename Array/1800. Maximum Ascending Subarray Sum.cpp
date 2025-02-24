class Solution {
public:
    int maxAscendingSum(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        int maxSum = nums[0];
        int curSum = nums[0];

        for(index = 1; index < numsSize; ++index)
        {
            if(nums[index - 1] >= nums[index])
            {
                maxSum = std::max(curSum, maxSum);
                curSum = 0;
            }

            curSum += nums[index];
        }

        maxSum = std::max(curSum, maxSum);

        return maxSum;
    }
};