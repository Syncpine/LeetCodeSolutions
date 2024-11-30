class Solution {
public:
    std::vector<int> findWordsContaining(const std::vector<std::string>& words, const char x)
    {
        std::vector<int> vec;

        const int wordsSize = words.size();
        int index = 0;

        for(index = 0; index < wordsSize; ++index)
        {
            if(std::string::npos != words[index].find(x))
            {
                vec.push_back(index);
            }
        }

        return vec;
    }
};