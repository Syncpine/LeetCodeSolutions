class Solution {
public:
    std::string reorderSpaces(const std::string& text)
    {
        const int strLength = text.length();

        int countSpace = 0;
        int countWord = 0;

        int index = 0;

        for(index = 0; index < strLength; ++index)
        {
            if(text[index] == ' ')
            {
                ++countSpace;
            }
        }

        if(text[0] != ' ')
        {
            ++countWord;
        }

        for(index = 1; index < strLength; ++index)
        {
            if(text[index - 1] == ' ' && text[index] != ' ')
            {
                ++countWord;
            }
        }

        int cc = 0;
        int mod = 0;

        if(countWord == 1)
        {
            cc = 0;
            mod = countSpace;
        }
        else
        {
            cc = countSpace / (countWord - 1);
            mod = countSpace - cc * (countWord - 1);
        }

        std::string retStr = "";

        index = 0;

        while(index < strLength)
        {
            while(index < strLength && text[index] == ' ')
            {
                ++index;
            }

            if(index >= strLength)
            {
                break;
            }

            while(index < strLength && text[index] != ' ')
            {
                retStr = retStr + text[index];
                ++index;
            }

            if(index >= strLength)
            {
                break;
            }

            if(countWord > 1)
            {
                retStr = retStr + std::string(cc, ' ');
                --countWord;
            }

            ++index;
        }

        retStr = retStr + std::string(mod, ' ');

        return retStr;
    }
};