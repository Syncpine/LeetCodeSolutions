class Solution {
public:
    bool isToeplitzMatrix(const std::vector<std::vector<int>>& matrix)
    {
        const int m = matrix.size();
        const int n = matrix[0].size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < m; ++ii)
        {
            jj = 0;

            while(ii + jj < m && jj < n)
            {
                if(matrix[ii][00] != matrix[ii + jj][jj])
                {
                    return false;
                }

                ++jj;
            }
        }

        for(jj = 0; jj < n; ++jj)
        {
            ii = 0;

            while(ii < m && ii + jj < n)
            {
                if(matrix[00][jj] != matrix[ii][ii + jj])
                {
                    return false;
                }

                ++ii;
            }
        }

        return true;
    }
};