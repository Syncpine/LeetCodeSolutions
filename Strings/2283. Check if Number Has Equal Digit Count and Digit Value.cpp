class Solution {
public:
    bool digitCount(const std::string& num)
    {
        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < num.length(); ++ii)
        {
            int count = 0;

            for(jj = 0; jj < num.length(); ++jj)
            {
                if(num[jj] - '0' == ii)
                {
                    ++count;
                }
            }

            if(num[ii] - '0' != count)
            {
                return false;
            }
        }

        return true;
    }
};