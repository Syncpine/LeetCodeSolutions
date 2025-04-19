class Solution {
public:
    std::vector<int> findMissingAndRepeatedValues(const std::vector<std::vector<int>>& grid)
    {
        const int n = grid.size();

        std::vector<int> nums(n * n, 0);

        for(auto vec : grid)
        {
            for(auto num : vec)
            {
                ++nums[num - 1];
            }
        }

        std::vector<int> ans(2, 0);

        for(auto index = 0; index < n * n; ++index)
        {
            if(nums[index] == 2)
            {
                ans[0] = index + 1;
            }
            else if(nums[index] == 0)
            {
                ans[1] = index + 1;
            }
        }

        return ans;
    }
};