#include <map>

class Solution {
public:
    bool isIsomorphic(const std::string& s, const std::string& t)
    {
        std::map<char, char> setStoT;
        std::map<char, char> setTtoS;

        const int strLength = s.length();
        int index = 0;

        while(strLength > index)
        {
            if(setStoT.count(s[index]) > 0)
            {
                if(setStoT[s[index]] != t[index])
                {
                    return false;
                }
            }
            else
            {
                if(setTtoS.count(t[index]) > 0)
                {
                    return false;
                }

                setStoT[s[index]] = t[index];
                setTtoS[t[index]] = s[index];
            }

            ++index;
        }

        return true;
    }
};