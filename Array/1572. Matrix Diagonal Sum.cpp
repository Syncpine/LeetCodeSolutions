class Solution {
public:
    int diagonalSum(const std::vector<std::vector<int>>& mat)
    {
        int total = 0;

        const int n = mat.size();

        int ii = 0;

        for(ii = 0; ii < n; ++ii)
        {
            total += mat[ii][ii];

            int jj = n - ii - 1;
            if(ii != jj)
            {
                total += mat[ii][n - ii - 1];
            }
        }

        return total;
    }
};