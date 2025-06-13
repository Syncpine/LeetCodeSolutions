class Solution {
public:
    std::vector<int> decrypt(const std::vector<int>& code, int k)
    {
        const int codeSize = code.size();

        int ii = 0;
        int jj = 0;

        std::vector<int> ans(codeSize, 0);

        if(k > 0)
        {
            for(ii = 0; ii < codeSize; ++ii)
            {
                for(jj = 1; jj <= k; ++jj)
                {
                    int pos = (ii + jj) % codeSize;
                    ans[ii] += code[pos];
                }
            }
        }
        else if(k < 0)
        {
            for(ii = 0; ii < codeSize; ++ii)
            {
                for(jj = k; jj < 0; ++jj)
                {
                    int pos = (ii + jj + codeSize) % codeSize;
                    ans[ii] += code[pos];
                }
            }
        }

        return ans;
    }
};