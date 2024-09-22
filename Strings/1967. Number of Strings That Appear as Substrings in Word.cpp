class Solution {
public:
    int numOfStrings(const std::vector<std::string>& patterns, const std::string& word)
    {
        int count = 0;

        for(auto pattern : patterns)
        {
            if(std::string::npos != word.find(pattern))
            {
                ++count;
            }
        }

        return count;
    }
};