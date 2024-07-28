#include <map>

class Solution {
public:
    std::vector<std::string> uncommonFromSentences(const std::string& s1, const std::string& s2)
    {
        std::vector<std::string> retVec;

        std::map<std::string, std::vector<int>> mapStr2Count;

        std::vector<std::string> vecStr1 = _SplitString(s1, ' ');
        std::vector<std::string> vecStr2 = _SplitString(s2, ' ');

        const int vecSize1 = vecStr1.size();
        const int vecSize2 = vecStr2.size();

        int index = 0;

        while(index < vecSize1)
        {
            auto itor = mapStr2Count.find(vecStr1[index]);
            if(mapStr2Count.end() == itor)
            {
                mapStr2Count[vecStr1[index]] = { 1, 0 };
            }
            else
            {
                ++mapStr2Count[vecStr1[index]][0];
            }

            ++index;
        }

        index = 0;

        while(index < vecSize2)
        {
            auto itor = mapStr2Count.find(vecStr2[index]);
            if(mapStr2Count.end() == itor)
            {
                mapStr2Count[vecStr2[index]] = { 0, 1 };
            }
            else
            {
                ++mapStr2Count[vecStr2[index]][1];
            }

            ++index;
        }

        for(auto itor : mapStr2Count)
        {
            if((itor.second[0] == 1 && itor.second[1] == 0)
                || (itor.second[0] == 0 && itor.second[1] == 1))
            {
                retVec.push_back(itor.first);
            }
        }

        return retVec;
    }

private:
    std::vector<std::string> _SplitString(const std::string& str, char ch)
    {
        std::vector<std::string> vecStr;

        std::string tmp = "";

        for(auto ii : str)
        {
            if(ii == ch)
            {
                if(tmp != "")
                {
                    vecStr.push_back(tmp);
                    tmp = "";
                }
            }
            else
            {
                tmp += ii;
            }
        }

        if(tmp != "")
        {
            vecStr.push_back(tmp);
        }

        return vecStr;
    }
};