class Solution {
public:
    bool checkOnesSegment(const std::string& s)
    {
        const int strLength = s.length();

        int index = 0;

        while(index < strLength)
        {
            if(s[index] != '1')
            {
                break;
            }

            ++index;
        }

        while(index < strLength)
        {
            if(s[index] == '1')
            {
                return false;
            }

            ++index;
        }

        return true;
    }
};