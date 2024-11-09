class Solution {
public:
    bool isAcronym(const std::vector<std::string>& words, const std::string& s)
    {
        const int vecSize = words.size();

        const int strLength = s.length();

        if(vecSize != strLength)
        {
            return false;
        }

        int index = 0;

        for(index = 0; index < vecSize; ++index)
        {
            if(words[index][0] != s[index])
            {
                return false;
            }
        }

        return true;
    }
};