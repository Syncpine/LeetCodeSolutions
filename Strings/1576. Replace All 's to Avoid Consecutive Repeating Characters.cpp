class Solution {
public:
    std::string modifyString(const std::string& s)
    {
        const int strLength = s.length();

        std::string retStr(strLength, 'a');

        int ii = 0;
        int jj = 0;

        while(ii < strLength)
        {
            if(s[ii] == '?')
            {
                jj = ii;
                while(jj < strLength && s[jj] == '?')
                {
                    ++jj;
                }

                std::vector<char> vec = { 'o', 'u' };

                if(ii > 0)
                {
                    vec[0] = s[ii - 1];
                }

                if(jj < strLength)
                {
                    vec[1] = s[jj];
                }

                vec = GetChars(vec[0], vec[1]);

                bool flag = false;

                for(int kk = ii; kk < jj ; ++kk)
                {
                    if(flag)
                    {
                        retStr[kk] = vec[0];
                    }
                    else
                    {
                        retStr[kk] = vec[1];
                    }

                    flag = !flag;
                }

                ii = jj;
            }
            else
            {
                retStr[ii] = s[ii];
                ++ii;
            }
        }

        return retStr;
    }

private:
    std::vector<char> GetChars(char ch1, char ch2)
    {
        std::vector<char> vec = { 'a', 'h' };

        if(vec[0] == ch1)
        {
            ++vec[0];

            if(vec[0] == ch2)
            {
                ++vec[0];
            }
        }

        if(vec[0] == ch2)
        {
            ++vec[0];

            if(vec[0] == ch1)
            {
                ++vec[0];
            }
        }

        if(vec[1] == ch1)
        {
            ++vec[1];

            if(vec[1] == ch2)
            {
                ++vec[1];
            }
        }

        if(vec[1] == ch2)
        {
            ++vec[1];

            if(vec[1] == ch1)
            {
                ++vec[1];
            }
        }

        return vec;
    }
};