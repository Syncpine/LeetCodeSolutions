class Solution {
public:
    std::string removeOuterParentheses(const std::string& s)
    {
        std::string retStr = "";

        const int sLength = s.length();
        int index = 0;

        int count = 0;

        for(index = 0; index < sLength; ++index)
        {
            if(s[index] == '(')
            {
                if(count != 0)
                {
                    retStr += s[index];
                }

                ++count;
            }
            else
            {
                if(count != 1)
                {
                    retStr += s[index];
                }

                --count;
            }
        }

        return retStr;
    }
};