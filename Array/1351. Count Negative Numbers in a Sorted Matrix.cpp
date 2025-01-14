class Solution {
public:
    int countNegatives(const std::vector<std::vector<int>>& grid)
    {
        int total = 0;

        const int m = grid.size();
        const int n = grid[0].size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < m; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(grid[ii][jj] < 0)
                {
                    ++total;
                }
            }
        }

        return total;
    }
};