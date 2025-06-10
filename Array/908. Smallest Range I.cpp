class Solution {
public:
    int smallestRangeI(const std::vector<int>& nums, const int k)
    {
        int minNum = nums[0] + k;
        int maxNum = nums[0] - k;

        for(auto num : nums)
        {
            minNum = std::min(num + k, minNum);
            maxNum = std::max(num - k, maxNum);
        }

        return (minNum >= maxNum) ? 0 : (maxNum - minNum);
    }
};