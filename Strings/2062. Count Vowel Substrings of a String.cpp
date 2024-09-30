#include <map>

class Solution {
public:
    int countVowelSubstrings(const std::string& word)
    {
        int count = 0;

        const int strLength = word.length();
        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < strLength; ++ii)
        {
            for(jj = ii; jj < strLength; ++jj)
            {
                std::string str = word.substr(ii, jj - ii + 1);

                std::map<char, int> chs = { {'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1} };
                bool flag = false;

                for(auto ch : str)
                {
                    auto itor = chs.find(ch);

                    if(chs.end() != itor)
                    {
                        itor->second = 0;
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }

                if(flag)
                {
                    break;
                }
                else
                {
                    bool isCount = true;

                    for(auto itor : chs)
                    {
                        if(itor.second != 0)
                        {
                            isCount = false;
                            break;
                        }
                    }

                    if(isCount)
                    {
                        ++count;
                    }
                }
            }
        }

        return count;
    }
};