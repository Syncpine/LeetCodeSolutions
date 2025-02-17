class Solution {
public:
    int numSpecial(const std::vector<std::vector<int>>& mat)
    {
        int total = 0;

        const int m = mat.size();
        const int n = mat[0].size();

        int ii = 0;
        int jj = 0;

        int kk = 0;

        for(ii = 0; ii < m; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(mat[ii][jj] != 1)
                {
                    continue;
                }

                bool flag = true;

                for(kk = 0; kk < m; ++kk)
                {
                    if(kk != ii && mat[kk][jj] == 1)
                    {
                        flag = false;
                        break;
                    }
                }

                for(kk = 0; kk < n; ++kk)
                {
                    if(kk != jj && mat[ii][kk] == 1)
                    {
                        flag = false;
                        break;
                    }
                }

                if(flag)
                {
                    total += 1;
                }
            }
        }

        return total;
    }
};