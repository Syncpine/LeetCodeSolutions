class Solution {
public:
    std::vector<int> getConcatenation(const std::vector<int>& nums)
    {
        const int n = nums.size();

        std::vector<int> ans(2 * n, 0);

        int index = 0;

        for(index = 0; index < n; ++index)
        {
            ans[index] = nums[index];
            ans[n + index] = nums[index];
        }

        return ans;
    }
};