class Solution {
public:
    std::vector<std::vector<int>> imageSmoother(const std::vector<std::vector<int>>& img)
    {
        m = img.size();
        n = img[0].size();

        std::vector<std::vector<int>> vec(m, std::vector<int>(n, 0));

        for(int ii = 0; ii < m; ++ ii)
        {
            for(int jj = 0; jj < n; ++jj)
            {
                int total = GetValue(img, ii - 1, jj - 1) + GetValue(img, ii - 1, jj) + GetValue(img, ii - 1, jj + 1)
                       + GetValue(img, ii, jj - 1) + GetValue(img, ii, jj) + GetValue(img, ii, jj + 1)
                       + GetValue(img, ii + 1, jj - 1) + GetValue(img, ii + 1, jj) + GetValue(img, ii + 1, jj + 1);

                vec[ii][jj] = total / m_CurCount;

                m_CurCount = 0;
            }
        }

        return vec;
    }

private:
    int GetValue(const std::vector<std::vector<int>>& img, const int xx, const int yy)
    {
        if(xx == -1 || xx == m)
        {
            return 0;
        }

        if(yy == -1 || yy == n)
        {
            return 0;
        }

        ++m_CurCount;

        return img[xx][yy];
    }

private:
    int m = 0;
    int n = 0;

    int m_CurCount = 0;
};