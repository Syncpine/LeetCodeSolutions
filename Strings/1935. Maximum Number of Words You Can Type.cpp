class Solution {
public:
    int canBeTypedWords(const std::string& text, const std::string& brokenLetters)
    {
        int count = 0;

        std::vector<int> vec(26, 0);

        for(auto ch : brokenLetters)
        {
            vec[ch - 'a'] = 1;
        }

        const int strLength = text.length();
        int index = 0;

        bool flag = true;

        while(index < strLength)
        {
            if(text[index] == ' ')
            {
                if(flag)
                {
                    ++count;
                }

                flag = true;
            }
            else
            {
                if(vec[text[index] - 'a'] == 1)
                {
                    flag = false;
                }
            }

            ++index;
        }

        if(flag)
        {
            ++count;
        }

        return count;
    }
};