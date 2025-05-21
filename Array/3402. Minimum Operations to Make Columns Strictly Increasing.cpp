class Solution {
public:
    int minimumOperations(std::vector<std::vector<int>>& grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        int ii = 0;
        int jj = 0;

        int ans = 0;

        for(jj = 0; jj < n; ++jj)
        {
            for(ii = 1; ii < m; ++ii)
            {
                if(grid[ii][jj] <= grid[ii - 1][jj])
                {
                    ans += grid[ii - 1][jj] + 1 - grid[ii][jj];
                    grid[ii][jj] = grid[ii - 1][jj] + 1;
                }
            }
        }

        return ans;
    }
};