class Solution {
public:
    std::string reformat(const std::string& s)
    {
        int countDigital = 0;
        int countLetter = 0;

        std::string strDigital = "";
        std::string strLetter = "";

        for(auto ch : s)
        {
            if('0' <= ch && ch <= '9')
            {
                strDigital += ch;
            }
            else if('a' <= ch && ch <= 'z')
            {
                strLetter += ch;
            }
        }

        std::string retStr = "";

        if(strDigital.length() == strLetter.length())
        {
            int index = 0;

            for( ; index < strLetter.length(); ++index)
            {
                retStr += strDigital[index];
                retStr += strLetter[index];
            }
        }
        else if(strDigital.length() == strLetter.length() + 1)
        {
            int index = 0;
            retStr += strDigital[index];

            for( ; index < strLetter.length(); ++index)
            {
                retStr += strLetter[index];
                retStr += strDigital[index + 1];
            }
        }
        else if(strLetter.length() == strDigital.length() + 1)
        {
            int index = 0;
            retStr += strLetter[index];

            for( ; index < strDigital.length(); ++index)
            {
                retStr += strDigital[index];
                retStr += strLetter[index + 1];
            }
        }

        return retStr;
    }
};