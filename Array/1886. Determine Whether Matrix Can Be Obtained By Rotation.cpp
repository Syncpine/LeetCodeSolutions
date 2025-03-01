class Solution {
public:
    bool findRotation(const std::vector<std::vector<int>>& mat, const std::vector<std::vector<int>>& target)
    {
        return Rotating_0(mat, target)
            || Rotating_90(mat, target)
            || Rotating_180(mat, target)
            || Rotating_270(mat, target);
    }

private:
    bool Rotating_0(const std::vector<std::vector<int>>& mat, const std::vector<std::vector<int>>& target)
    {
        const int n = mat.size();

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(target[ii][jj] != mat[ii][jj])
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool Rotating_90(const std::vector<std::vector<int>>& mat, const std::vector<std::vector<int>>& target)
    {
        const int n = mat.size();

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(target[ii][jj] != mat[jj][n - ii - 1])
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool Rotating_180(const std::vector<std::vector<int>>& mat, const std::vector<std::vector<int>>& target)
    {
        const int n = mat.size();

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(target[ii][jj] != mat[n - ii - 1][n - jj - 1])
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool Rotating_270(const std::vector<std::vector<int>>& mat, const std::vector<std::vector<int>>& target)
    {
        const int n = mat.size();

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(target[ii][jj] != mat[n - jj - 1][ii])
                {
                    return false;
                }
            }
        }

        return true;
    }

private:
    int ii = 0;
    int jj = 0;
};