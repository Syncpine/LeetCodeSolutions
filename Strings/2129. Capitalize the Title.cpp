class Solution {
public:
    std::string capitalizeTitle(const std::string& title)
    {
        std::string retStr = "";

        std::string tmpStr = "";

        const int strLength = title.length();
        int index = 0;

        while(index < strLength)
        {
            while(index < strLength && title[index] == ' ')
            {
                retStr += title[index];
                ++index;
            }

            if(index >= strLength)
            {
                break;
            }

            while(index < strLength && title[index] != ' ')
            {
                tmpStr += title[index];
                ++index;
            }

            if(tmpStr.length() <= 2)
            {
                for(auto ch : tmpStr)
                {
                    retStr += std::tolower(ch);
                }
            }
            else
            {
                retStr += std::toupper(tmpStr[0]);

                for(int ii = 1; ii < tmpStr.length(); ++ii)
                {
                    retStr += std::tolower(tmpStr[ii]);
                }
            }

            tmpStr = "";
        }

        return retStr;
    }
};