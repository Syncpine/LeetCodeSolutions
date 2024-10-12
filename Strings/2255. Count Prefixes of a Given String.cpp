class Solution {
public:
    int countPrefixes(const std::vector<std::string>& words, const std::string s)
    {
        int count = 0;

        for(auto word : words)
        {
            std::string str = s.substr(0, word.length());

            if(word == str)
            {
                ++count;
            }
        }

        return count;
    }
};