class Solution {
public:
    std::string replaceDigits(const std::string& s)
    {
        const int strLength = s.length();
        int index = 0;

        std::string retStr(strLength, '\0');

        while(index < strLength - 1)
        {
            retStr[index] = s[index];
            ++index;

            retStr[index] = retStr[index - 1] + (s[index] - '0');
            ++index;
        }

        if(index < strLength)
        {
            retStr[index] = s[index];
        }

        return retStr;
    }
};