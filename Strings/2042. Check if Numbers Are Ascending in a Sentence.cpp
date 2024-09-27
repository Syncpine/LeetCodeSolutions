class Solution {
public:
    bool areNumbersAscending(const std::string& s)
    {
        const int strLength = s.length();
        int index = 0;

        int preValue = -1;

        while(index < strLength)
        {
            int curValue = 0;

            while(index < strLength && ('0' <= s[index] && s[index] <= '9'))
            {
                curValue *= 10;
                curValue += (s[index] - '0');

                ++index;
            }

            if(preValue >= curValue)
            {
                return false;
            }

            preValue = curValue;

            while(index < strLength && (s[index] < '0' || '9' < s[index]))
            {
                ++index;
            }
        }

        return true;
    }
};