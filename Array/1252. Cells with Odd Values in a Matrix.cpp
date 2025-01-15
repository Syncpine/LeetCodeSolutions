class Solution {
public:
    int oddCells(const int m, const int n, const std::vector<std::vector<int>>& indices)
    {
        std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 0));

        for(auto item : indices)
        {
            int row = item[0];
            int col = item[1];

            for(int yy = 0; yy < n; ++yy)
            {
                ++matrix[row][yy];
            }

            for(int xx = 0; xx < m; ++xx)
            {
                ++matrix[xx][col];
            }
        }

        int count = 0;

        for(int xx = 0; xx < m; ++xx)
        {
            for(int yy = 0; yy < n; ++yy)
            {
                if(matrix[xx][yy] % 2 == 1)
                {
                    ++count;
                }
            }
        }

        return count;
    }
};