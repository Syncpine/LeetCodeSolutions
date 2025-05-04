class Solution {
public:
    bool satisfiesConditions(const std::vector<std::vector<int>>& grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        int row = 0;
        int col = 0;

        for(col = 1; col < n; ++col)
        {
            if(grid[0][col - 1] == grid[0][col])
            {
                return false;
            }
        }

        for(col = 0; col < n; ++col)
        {
            for(row = 0; row < m; ++row)
            {
                if(grid[0][col] != grid[row][col])
                {
                    return false;
                }
            }
        }

        return true;
    }
};