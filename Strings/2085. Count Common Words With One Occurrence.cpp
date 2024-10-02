class Solution {
public:
    int countWords(const std::vector<std::string>& words1, const std::vector<std::string>& words2)
    {
        std::map<std::string, std::vector<int>> set;

        for(auto str : words1)
        {
            auto itor = set.find(str);

            if(set.end() != itor)
            {
                ++itor->second[0];
            }
            else
            {
                set.insert({ str, { 1, 0 } });
            }
        }

        for(auto str : words2)
        {
            auto itor = set.find(str);

            if(set.end() != itor)
            {
                ++itor->second[1];
            }
            else
            {
                set.insert({ str, { 0, 1 } });
            }
        }

        int count = 0;

        for(auto itor : set)
        {
            if(itor.second[0] == 1 && itor.second[1] == 1)
            {
                ++count;
            }
        }

        return count;
    }
};