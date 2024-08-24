class Solution {
public:
    int maxLengthBetweenEqualCharacters(const std::string& s)
    {
        int ret = -1;

        const int strLength = s.length();

        for(int ii = 0; ii < strLength; ++ii)
        {
            for(int jj = ii + 1; jj < strLength; ++jj)
            {
                if(s[ii] == s[jj])
                {
                    int tmp = jj - ii - 1;

                    ret = (tmp > ret) ? tmp : ret;
                }
            }
        }

        return ret;
    }
};