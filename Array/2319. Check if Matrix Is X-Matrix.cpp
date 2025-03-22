class Solution {
public:
    bool checkXMatrix(const std::vector<std::vector<int>>& grid)
    {
        const int n = grid.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(ii == jj || ii == n -jj - 1)
                {
                    if(grid[ii][jj] == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    if(grid[ii][jj] != 0)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};