class Solution {
public:
    bool areSimilar(const std::vector<std::vector<int>>& mat, const int k)
    {
        const int m = mat.size();
        const int n = mat[0].size();

        int row = 0;
        int col = 0;

        int pos = 0;

        for(row = 0; row < m; ++row)
        {
            if(row % 2 == 1)
            {
                for(col = 0; col < n; ++col)
                {
                    pos = col - k;
                    pos = (pos + n * k) % n;

                    if(mat[row][col] != mat[row][pos])
                    {
                        return false;
                    }
                }
            }
            else
            {
                for(col = 0; col < n; ++col)
                {
                    pos = col + k;
                    pos = (pos + n * k) % n;

                    if(mat[row][col] != mat[row][pos])
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};