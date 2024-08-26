class Solution {
public:
    int maxRepeating(const std::string& sequence, const std::string& word)
    {
        int count = 0;
        std::string copyWord = word;

        while(true)
        {
            if(std::string::npos == sequence.find(copyWord))
            {
                return count;
            }
            else
            {
                ++count;
                copyWord += word;
            }
        }

        return 0;
    }
};