class Solution {
public:
    int lengthOfLastWord(const std::string& s)
    {
        auto ret = 0;
        int index = s.length() - 1;

        while(0 <= index)
        {
            if(' ' != s[index])
            {
                break;
            }

            --index;
        }

        while(0 <= index)
        {
            if(' ' == s[index])
            {
                break;
            }
            --index;
            ++ret;
        }

        return ret;
    }
};