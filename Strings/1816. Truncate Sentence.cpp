class Solution {
public:
    std::string truncateSentence(const std::string& s, int k)
    {
        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if(s[index] == ' ')
            {
                --k;
            }

            if(k <= 0)
            {
                return s.substr(0, index);
            }

            ++index;
        }

        return s.substr(0, index);
    }
};