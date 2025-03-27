class Solution {
public:
    std::vector<std::vector<int>> largestLocal(const std::vector<std::vector<int>>& grid)
    {
        const int n = grid.size();

        std::vector<std::vector<int>> maxLocal(n - 2, std::vector<int>(n - 2, 0));

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < n - 2; ++ii)
        {
            for(jj = 0; jj < n - 2; ++jj)
            {
                maxLocal[ii][jj]
                    = std::max( { grid[ii][jj], grid[ii][jj + 1], grid[ii][jj + 2],
                        grid[ii + 1][jj], grid[ii + 1][jj + 1], grid[ii + 1][jj + 2],
                        grid[ii + 2][jj], grid[ii + 2][jj + 1], grid[ii + 2][jj + 2] } );
            }
        }

        return maxLocal;
    }
};