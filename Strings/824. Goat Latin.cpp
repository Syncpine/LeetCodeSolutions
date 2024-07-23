class Solution {
public:
    std::string toGoatLatin(const std::string& sentence)
    {
        std::string retStr = "";

        const int strLength = sentence.length();
        int index = 0;

        std::string word = "";
        std::string end_a = "a";

        while(index < strLength)
        {
            if(sentence[index] == ' ')
            {
                if(word != "")
                {
                    if(!IsVowel(word[0]))
                    {
                        std::string tmp = word.substr(1);
                        tmp += word[0];
                        word = tmp;
                    }

                    word += "ma";
                    word += end_a;

                    end_a += 'a';

                    retStr += word + ' ';
                    word = "";
                }
            }
            else
            {
                word += sentence[index];
            }

            ++index;
        }

        if(word != "")
        {
            if(!IsVowel(word[0]))
            {
                std::string tmp = word.substr(1);
                tmp += word[0];
                word = tmp;
            }

            word += "ma";
            word += end_a;

            retStr += word;
        }

        return retStr;
    }

private:
    bool IsVowel(const char& ch)
    {
        switch(ch)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
};