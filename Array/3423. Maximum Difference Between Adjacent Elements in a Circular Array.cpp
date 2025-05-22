class Solution {
public:
    int maxAdjacentDistance(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        int maxDiff = std::abs(nums[numsSize - 1] - nums[0]);

        for(index = 1; index < numsSize; ++index)
        {
            int curDiff = std::abs(nums[index] - nums[index - 1]);
            maxDiff = std::max(curDiff, maxDiff);
        }

        return maxDiff;
    }
};