class Solution {
public:
    std::string reversePrefix(std::string& word, const char& ch)
    {
        int start = 0;
        int end = word.find_first_of(ch);

        if(std::string::npos == end)
        {
            return word;
        }

        while(start < end)
        {
            std::swap(word[start], word[end]);

            ++start;
            --end;
        }

        return word;
    }
};