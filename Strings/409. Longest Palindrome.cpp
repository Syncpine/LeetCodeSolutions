#include <map>

class Solution {
public:
    int longestPalindrome(const std::string& s)
    {
        std::map<char, int> set;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if(set.count(s[index]) > 0)
            {
                ++set[s[index]];
            }
            else
            {
                set[s[index]] = 1;
            }

            ++index;
        }

        int ret = 0;
        bool has1 = false;
        auto itor = set.begin();
        while(set.end() != itor)
        {
            ret += (itor->second / 2) * 2;
            if(1 == itor->second % 2)
            {
                has1 = true;
            }

            ++itor;
        }

        if(has1)
        {
            ret += 1;
        }

        return ret;
    }
};