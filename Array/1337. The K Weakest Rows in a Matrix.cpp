class Solution {
public:
    std::vector<int> kWeakestRows(const std::vector<std::vector<int>>& mat, const int k)
    {
        const int m = mat.size();

        int ii = 0;
        int jj = 0;

        std::vector<int> vecMat(m, 0);

        for(ii = 0; ii < m; ++ii)
        {
            int count = 0;

            for(auto item : mat[ii])
            {
                if(item == 0)
                {
                    break;
                }

                ++count;
            }

            vecMat[ii] = count;
        }

        std::vector<int> vecIndex(m, 0);

        for(ii = 0; ii < m; ++ii)
        {
            vecIndex[ii] = ii;
        }

        for(auto item : vecMat)
        {
            std::cout << item << " ";
        }
        std::cout << std::endl;

        for(ii = 0; ii < m; ++ii)
        {
            int kk = ii;

            for(jj = ii + 1; jj < m; ++jj)
            {
                if(vecMat[kk] > vecMat[jj])
                {
                    kk = jj;
                }
                else if(vecMat[kk] == vecMat[jj])
                {
                    if(vecIndex[kk] > vecIndex[jj])
                    {
                        kk = jj;
                    }
                }
            }

            std::swap(vecMat[ii], vecMat[kk]);
            std::swap(vecIndex[ii], vecIndex[kk]);
        }

        return std::vector<int>(vecIndex.begin(), vecIndex.begin() + k);
    }
};