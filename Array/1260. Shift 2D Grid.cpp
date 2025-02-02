class Solution {
public:
    std::vector<std::vector<int>> shiftGrid(std::vector<std::vector<int>>& grid, int k)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        std::vector<std::vector<int>> retGrid = grid;

        k = k % (m * n);

        int ii = 0;
        int jj = 0;

        while(k--)
        {
            for(ii = 0; ii < m; ++ii)
            {
                for(jj = 0; jj < n; ++jj)
                {
                    int new_ii = ii;
                    int new_jj = jj + 1;

                    if(new_jj == n)
                    {
                        ++new_ii;
                        new_jj = 0;

                        if(new_ii == m)
                        {
                            new_ii = 0;
                        }
                    }

                    retGrid[new_ii][new_jj] = grid[ii][jj];
                }
            }

            grid = retGrid;
        }

        return retGrid;
    }
};