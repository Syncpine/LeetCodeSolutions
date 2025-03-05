class Solution {
public:
    int minimumDifference(std::vector<int>& nums, const int k)
    {
        std::sort(nums.begin(), nums.end());

        const int numsSize = nums.size();

        int start = 0;
        int end = k - 1;

        int minDiff = nums[end] - nums[start];

        while(end < numsSize)
        {
            int tmpDiff = nums[end] - nums[start];

            minDiff = (tmpDiff < minDiff) ? tmpDiff : minDiff;

            ++start;
            ++end;
        }

        return minDiff;
    }
};