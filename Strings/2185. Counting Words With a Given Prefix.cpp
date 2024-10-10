class Solution {
public:
    int prefixCount(const std::vector<std::string>& words, const std::string& pref)
    {
        int count = 0;

        const int strLength = pref.length();

        for(auto word : words)
        {
            if(word.substr(0, strLength) == pref)
            {
                ++count;
            }
        }

        return count;
    }
};