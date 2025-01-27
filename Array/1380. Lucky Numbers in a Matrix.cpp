class Solution {
public:
    std::vector<int> luckyNumbers(const std::vector<std::vector<int>>& matrix)
    {
        std::vector<int> matLucky;

        const int m = matrix.size();
        const int n = matrix[0].size();

        int row = 0;
        int col = 0;

        int index = 0;

        for(row = 0; row < m; ++row)
        {
            int pos = 0;

            for(col = 0; col < n; ++col)
            {
                if(matrix[row][col] < matrix[row][pos])
                {
                    pos = col;
                }
            }

            bool flag = true;

            for(index = 0; index < m; ++index)
            {
                if(matrix[index][pos] > matrix[row][pos])
                {
                    flag = false;
                    break;
                }
            }

            if(true == flag)
            {
                matLucky.push_back(matrix[row][pos]);
            }
        }

        return matLucky;
    }
};