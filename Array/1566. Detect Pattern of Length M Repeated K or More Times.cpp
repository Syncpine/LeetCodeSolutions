class Solution {
public:
    bool containsPattern(const std::vector<int>& arr, const int m, const int k)
    {
        const int arrSize = arr.size();

        int ii = 0;
        int jj = 0;
        int kk = 0;

        for(ii = 0; ii <= arrSize - m * k; ++ii)
        {
            bool flag = true;

            for(jj = 0; jj < m; ++jj)
            {
                for(kk = 0; kk < k; ++kk)
                {
                    if(arr[ii + jj] != arr[ii + m * kk + jj])
                    {
                        flag = false;
                        break;
                    }
                }

                if(!flag)
                {
                    break;
                }
            }

            if(flag)
            {
                return true;
            }
        }

        return false;
    }
};