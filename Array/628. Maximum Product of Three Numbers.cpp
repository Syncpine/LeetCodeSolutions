class Solution {
public:
    int maximumProduct(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        int end = nums.size() - 1;

        int ans1 = nums[0] * nums[1] * nums[end];
        int ans2 = nums[end - 2] * nums[end - 1] * nums[end];

        return std::max(ans1, ans2);
    }
};