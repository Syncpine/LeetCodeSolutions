class Solution {
public:
    bool isPrefixString(const std::string& s, const std::vector<std::string>& words)
    {
        const int strLength = s.length();
        int index = 0;

        const int vecSize = words.size();
        int ii = 0;
        int jj = 0;

        while(index < strLength)
        {
            if(ii >= vecSize)
            {
                return false;
            }

            const int len = words[ii].length();

            while(jj < len)
            {
                if(index >= strLength)
                {
                    return jj == len;
                }

                if(s[index] != words[ii][jj])
                {
                    return false;
                }

                ++jj;
                ++index;
            }

            ++ii;
            jj = 0;
        }

        return index >= strLength;
    }
};