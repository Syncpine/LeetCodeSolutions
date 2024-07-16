#include <map>

class Solution {
public:
    std::string shortestCompletingWord(const std::string& licensePlate, const std::vector<std::string>& words)
    {
        std::map<char, int> set;

        int countLetter = 0;

        for(auto ch : licensePlate)
        {
            char c = std::tolower(ch);

            if('a' <= c && c <= 'z')
            {
                if(set.count(c) > 0)
                {
                    ++set[c];
                }
                else
                {
                    set[c] = 1;
                }

                ++countLetter;
            }
        }

        std::string ret = "";

        for(auto word : words)
        {
            if(word.length() < countLetter)
            {
                continue;
            }

            std::map<char, int> set2 = set;

            for(auto ch : word)
            {
                if(set2.count(ch) > 0)
                {
                    --set2[ch];
                }
            }

            bool flag = true;

            auto itor = set2.begin();
            while(set2.end() != itor)
            {
                if(itor->second > 0)
                {
                    flag = false;
                    break;
                }

                ++itor;
            }

            if(!flag)
            {
                continue;
            }

            ret = ((ret == "") ? word : ret);

            if(word.length() < ret.length())
            {
                ret = word;
            }
        }

        return ret;
    }
};