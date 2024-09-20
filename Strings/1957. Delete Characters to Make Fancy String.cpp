class Solution {
public:
    std::string makeFancyString(const std::string& s)
    {
        std::string retStr = "";

        int count = 1;
        retStr += s[0];

        const int strLength = s.length();
        int index = 1;

        char last = s[0];

        while(index < strLength)
        {
            if(s[index] == last)
            {
                ++count;

                if(count >= 3)
                {
                    --count;
                    ++index;
                    continue;
                }
            }
            else
            {
                count = 1;
                last = s[index];
            }
            
            retStr += s[index];
            ++index;
        }

        return retStr;
    }
};