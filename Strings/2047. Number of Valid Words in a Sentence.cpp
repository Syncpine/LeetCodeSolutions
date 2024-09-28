class Solution {
public:
    int countValidWords(const std::string& sentence)
    {
        int count = 0;

        const int strLength = sentence.length();
        int index = 0;

        std::string str = "";

        while(index < strLength)
        {
            if(sentence[index] == ' ')
            {
                if(str != "")
                {
                    count += IsSentence(str);
                    str = "";
                }
            }
            else
            {
                str += sentence[index];
            }

            ++index;
        }

        if(str != "")
        {
            count += IsSentence(str);
        }

        return count;
    }

private:
    bool IsSentence(const std::string& str)
    {
        int sign_1 = -1;    // '-'
        int sign_2 = -1;    // '!' / '.' / ','

        const int strLength = str.length();

        for(int index = 0; index < strLength; ++index)
        {
            if('0' <= str[index] && str[index] <= '9')
            {
                return false;
            }

            if(str[index] == '-')
            {
                if(sign_1 != -1)
                {
                    return false;
                }

                sign_1 = index;

                if((0 == sign_1) || (sign_1 == strLength - 1) || (!std::islower(str[sign_1 - 1]) || !std::islower(str[sign_1 + 1])))
                {
                    return false;
                }

                continue;
            }

            if(str[index] == '!' || str[index] == '.' || str[index] == ',')
            {
                if(sign_2 != -1)
                {
                    return false;
                }

                sign_2 = index;

                if(sign_2 != strLength - 1)
                {
                    return false;
                }
            }
        }

        return true;
    }
};