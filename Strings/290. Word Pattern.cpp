#include <map>

class Solution {
public:
    bool wordPattern(const std::string& pattern, const std::string& s) 
    {
        std::vector<std::string> vecStr;

        std::string str = "";

        for(auto ch : s)
        {
            if(' ' == ch)
            {
                if("" != str)
                {
                    vecStr.push_back(str);
                    str = "";
                }
            }
            else
            {
                str += ch;
            }
        }

        if("" != str)
        {
            vecStr.push_back(str);
        }

        if(pattern.length() != vecStr.size())
        {
            return false;
        }

        std::map<char, std::string> setPtoS;
        std::map<std::string, char> setStoP;

        const auto vecSize = vecStr.size();

        int index = 0;

        while(vecSize > index)
        {
            if(setPtoS.count(pattern[index]) > 0)
            {
                if(setPtoS[pattern[index]] != vecStr[index])
                {
                    return false;
                }

                if(setStoP[vecStr[index]] != pattern[index])
                {
                    return false;
                }
            }

            if(setStoP.count(vecStr[index]) > 0)
            {
                if(setStoP[vecStr[index]] != pattern[index])
                {
                    return false;
                }

                if(setPtoS[pattern[index]] != vecStr[index])
                {
                    return false;
                }
            }

            setPtoS[pattern[index]] = vecStr[index];
            setStoP[vecStr[index]] = pattern[index];

            ++index;
        }

        return true;
    }
};