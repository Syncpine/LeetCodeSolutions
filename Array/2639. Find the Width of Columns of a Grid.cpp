class Solution {
public:
    std::vector<int> findColumnWidth(const std::vector<std::vector<int>>& grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        int ii = 0;
        int jj = 0;

        std::vector<int> ans(n, 0);

        for(jj = 0; jj < n; ++jj)
        {
            for(ii = 0; ii < m; ++ii)
            {
                int len = std::to_string(grid[ii][jj]).length();
                ans[jj] = std::max(len, ans[jj]);
            }
        }

        return ans;
    }
};