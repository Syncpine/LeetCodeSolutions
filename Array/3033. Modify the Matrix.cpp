class Solution {
public:
    std::vector<std::vector<int>> modifiedMatrix(std::vector<std::vector<int>>& matrix)
    {
        const int m = matrix.size();
        const int n = matrix[0].size();

        int row = 0;
        int col = 0;

        for(col = 0; col < n; ++col)
        {
            int maxNum = 0;

            for(row = 0; row < m; ++row)
            {
                maxNum = std::max(matrix[row][col], maxNum);
            }

            for(row = 0; row < m; ++row)
            {
                if(matrix[row][col] == -1)
                {
                    matrix[row][col] = maxNum;
                }
            }
        }

        return matrix;
    }
};