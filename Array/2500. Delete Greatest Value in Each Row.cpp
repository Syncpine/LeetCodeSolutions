class Solution {
public:
    int deleteGreatestValue(std::vector<std::vector<int>>& grid)
    {
        const int m = grid.size();
        const int n = grid[0].size();

        for(auto& vec : grid)
        {
            std::sort(vec.begin(), vec.end());
        }

        for(auto vec : grid)
        {
            for(auto ii : vec)
            {
                std::cout << ii << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        int ii = 0;
        int jj = 0;

        int total = 0;

        for(jj = 0; jj < n; ++jj)
        {
            int colMax = 0;

            for(ii = 0; ii < m; ++ii)
            {
                colMax = std::max(grid[ii][jj], colMax);
            }

            total += colMax;
        }

        return total;
    }
};