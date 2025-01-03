class Solution {
public:
    std::vector<std::vector<int>> matrixReshape(const std::vector<std::vector<int>>& mat, const int r, const int c)
    {
        const int m = mat.size();
        const int n = mat[0].size();

        if(m * n != r * c)
        {
            return mat;
        }

        std::vector<std::vector<int>> retMat(r, std::vector<int>(c, 0));

        int ii = 0;
        int jj = 0;

        int pp = 0;
        int qq = 0;

        for(ii = 0; ii < m; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(c == qq)
                {
                    ++pp;
                    qq = 0;
                }

                retMat[pp][qq] = mat[ii][jj];
                ++qq;
            }
        }

        return retMat;
    }
};