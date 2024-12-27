class Solution {
public:
    std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& matrix)
    {
        const int m = matrix.size();        // row -> column
        const int n = matrix[0].size();     // column -> row

        std::vector<std::vector<int>> transpose(n, std::vector<int>(m, 0));

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < m; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                transpose[jj][ii] = matrix[ii][jj];
            }
        }

        return transpose;
    }
};