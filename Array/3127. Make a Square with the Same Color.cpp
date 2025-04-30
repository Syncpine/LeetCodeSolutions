class Solution {
public:
    bool canMakeSquare(const std::vector<std::vector<char>>& grid)
    {
        // 'B' -> 0
        // 'W' -> 1
        std::vector<std::vector<int>> vecGrid(3, std::vector<int>(3, 0));

        for(int row = 0; row < 3; ++row)
        {
            for(int col = 0; col < 3; ++col)
            {
                if(grid[row][col] == 'W')
                {
                    vecGrid[row][col] = 1;
                }
            }
        }

        std::vector<std::vector<int>> vecGrid2(2, std::vector<int>(2, 0));

        vecGrid2[0][0] = vecGrid[0][0] + vecGrid[0][1] + vecGrid[1][0] + vecGrid[1][1];
        vecGrid2[0][1] = vecGrid[0][1] + vecGrid[0][2] + vecGrid[1][1] + vecGrid[1][2];
        vecGrid2[1][0] = vecGrid[1][0] + vecGrid[1][1] + vecGrid[2][0] + vecGrid[2][1];
        vecGrid2[1][1] = vecGrid[1][1] + vecGrid[1][2] + vecGrid[2][1] + vecGrid[2][2];

        return (vecGrid2[0][0] != 2) || (vecGrid2[0][1] != 2)
            || (vecGrid2[1][0] != 2) || (vecGrid2[1][1] != 2);
    }
};