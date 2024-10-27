class Solution {
public:
    int minimumRecolors(const std::string& blocks, int k)
    {
        int min_count = k;

        const int strLength = blocks.length();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii <= strLength - k; ++ii)
        {
            int count = 0;

            for(jj = 0; jj < k; ++jj)
            {
                if('W' == blocks[ii + jj])
                {
                    ++count;
                }
            }

            min_count = (count < min_count) ? count : min_count;
        }

        return min_count;
    }
};