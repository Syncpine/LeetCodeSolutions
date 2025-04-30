class Solution {
public:
    int longestMonotonicSubarray(const std::vector<int>& nums)
    {
        const int n = nums.size();

        int index = 0;

        int maxIncreaseLen = 1;
        int maxDecreaseLen = 1;

        int increaseLen = 1;
        int decreaseLen = 1;

        for(index = 1; index < n; ++index)
        {
            if(nums[index - 1] < nums[index])
            {
                ++increaseLen;
                maxIncreaseLen = std::max(increaseLen, maxIncreaseLen);

                decreaseLen = 1;
            }
            else if(nums[index - 1] > nums[index])
            {
                ++decreaseLen;
                maxDecreaseLen = std::max(decreaseLen, maxDecreaseLen);

                increaseLen = 1;
            }
            else
            {
                increaseLen = 1;
                decreaseLen = 1;
            }
        }

        return std::max(maxIncreaseLen, maxDecreaseLen);
    }
};