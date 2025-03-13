class Solution {
public:
    bool checkValid(const std::vector<std::vector<int>>& matrix)
    {
        const int n = matrix.size();

        int ii = 0;
        int jj = 0;

        int num = 0;

        for(num = 1; num <= n; ++num)
        {
            for(ii = 0; ii < n; ++ii)
            {
                bool flag = false;

                for(jj = 0; jj < n; ++jj)
                {
                    if(num == matrix[ii][jj])
                    {
                        flag = true;
                        break;
                    }
                }

                if(!flag)
                {
                    return false;
                }
            }
        }

        for(num = 1; num <= n; ++num)
        {
            for(jj = 0; jj < n; ++jj)
            {
                bool flag = false;

                for(ii = 0; ii < n; ++ii)
                {
                    if(num == matrix[ii][jj])
                    {
                        flag = true;
                        break;
                    }
                }

                if(!flag)
                {
                    return false;
                }
            }
        }

        return true;
    }
};