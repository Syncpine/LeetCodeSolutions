class Solution {
public:
    std::string getEncryptedString(const std::string& s, int k)
    {
        std::string retStr = "";

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            int tmp = (index + k) % strLength;
            retStr += s[tmp];

            ++index;
        }

        return retStr;
    }
};