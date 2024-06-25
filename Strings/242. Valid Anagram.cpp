class Solution {
public:
    bool isAnagram(const std::string& s, const std::string& t)
    {
        if(s.length() != t.length())
        {
            return false;
        }

        std::map<char, int> set;

        const int strLength = s.length();

        int index = 0;

        while(strLength > index)
        {
            ++set[s[index]];
            --set[t[index]];

            ++index;
        }

        auto itor = set.begin();
        while(set.end() != itor)
        {
            if(0 != itor->second)
            {
                return false;
            }

            ++itor;
        }

        return true;
    }
};