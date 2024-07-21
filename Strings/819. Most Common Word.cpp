#include <map>
#include <algorithm>

class Solution {
public:
    std::string mostCommonWord(const std::string& paragraph, const std::vector<std::string>& banned)
    {
        std::pair<std::string, int> maxCount = {"", -1};

        std::map<std::string, int> set;

        std::string tmp = "";

        for(auto ch : paragraph)
        {
            if(std::isalpha(ch))
            {
                tmp += std::tolower(ch);
            }
            else
            {
                if(tmp != "")
                {
                    if(banned.end() == std::find(banned.begin(), banned.end(), tmp))
                    {
                        if(set.end() != set.find(tmp))
                        {
                            ++set[tmp];
                        }
                        else
                        {
                            set[tmp] = 1;
                        }
                    }

                    tmp = "";
                }
            }
        }

        if(tmp != "")
        {
            if(banned.end() == std::find(banned.begin(), banned.end(), tmp))
            {
                if(set.end() != set.find(tmp))
                {
                    ++set[tmp];
                }
                else
                {
                    set[tmp] = 1;
                }
            }
        }

        for(auto elem : set)
        {
            if(elem.second > maxCount.second)
            {
                maxCount = elem;
            }
        }

        return maxCount.first;
    }
};