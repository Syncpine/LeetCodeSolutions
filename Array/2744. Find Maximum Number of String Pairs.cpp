class Solution {
public:
    int maximumNumberOfStringPairs(const std::vector<string>& words)
    {
        std::set<std::string> setWords;

        int count = 0;

        for(auto word : words)
        {
            std::string reverse = "";

            for(auto ch : word)
            {
                reverse.insert(reverse.begin(), ch);
            }

            if(setWords.end() == setWords.find(reverse))
            {
                setWords.insert(word);
            }
            else
            {
                setWords.erase(reverse);
                ++count;
            }
        }

        return count;
    }
};