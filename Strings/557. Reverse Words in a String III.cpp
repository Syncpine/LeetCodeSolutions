class Solution {
public:
    std::string reverseWords(std::string& s)
    {
        const int strLength = s.length();

        int ii = 0;
        int jj = 0;
        int kk = 0;

        while(ii < strLength)
        {
            if(s[ii] == ' ')
            {
                while(jj < kk)
                {
                    std::swap(s[jj], s[kk]);

                    ++jj;
                    --kk;
                }

                jj = ii + 1;
            }

            kk = ii;
            ++ii;
        }

        while(jj < kk)
        {
            std::swap(s[jj], s[kk]);

            ++jj;
            --kk;
        }

        return s;
    }
};