class Solution {
public:
    std::string mergeAlternately(const std::string& word1, const std::string& word2)
    {
        const int strLength1 = word1.length();
        const int strLength2 = word2.length();

        std::string retStr(strLength1 + strLength2, '\0');

        int index = 0;
        int index2 = 0;

        while(index < strLength1 && index < strLength2)
        {
            retStr[index2] = word1[index];

            ++index2;

            retStr[index2] = word2[index];

            ++index2;
            ++index;
        }

        while(index < strLength1)
        {
            retStr[index2] = word1[index];
            ++index;
            ++index2;
        }

        while(index < strLength2)
        {
            retStr[index2] = word2[index];
            ++index;
            ++index2;
        }

        return retStr;
    }
};