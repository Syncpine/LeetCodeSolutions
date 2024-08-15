class Solution {
public:
    int isPrefixOfWord(const std::string& sentence, const std::string& searchWord)
    {
        int count = 1;

        const int strLength_1 = sentence.length();
        const int strLength_2 = searchWord.length();

        int index = 0;
        
        bool start = true;

        for( ; index < strLength_1; ++index)
        {
            if(sentence[index] == ' ')
            {
                start = true;
                ++count;
            }
            else
            {
                if(start)
                {
                    if(index + strLength_2 <= strLength_1 && sentence.substr(index, strLength_2) == searchWord)
                    {
                        return count;
                    }
                }

                start = false;
            }
        }

        return -1;
    }
};