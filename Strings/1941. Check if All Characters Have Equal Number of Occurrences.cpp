class Solution {
public:
    bool areOccurrencesEqual(const std::string& s)
    {
        std::map<char, int> set;

        for(auto ch : s)
        {
            if(set.end() == set.find(ch))
            {
                set[ch] = 1;
            }
            else
            {
                ++set[ch];
            }
        }

        auto itor = set.begin();
        const int cur = itor->second;

        while(set.end() != itor)
        {
            if(cur != itor->second)
            {
                return false;
            }

            ++itor;
        }

        return true;
    }
};