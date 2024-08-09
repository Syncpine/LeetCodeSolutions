class Solution {
public:
    int balancedStringSplit(const std::string& s)
    {
        int count = 0;

        int sum = ((s[0] == 'L') ? -1 : 1);

        const int strLength = s.length();

        for(auto index = 1; index < strLength; ++index)
        {
            if(s[index] == 'L')
            {
                --sum;
            }
            else
            {
                ++sum;
            }

            if(0 == sum)
            {
                ++count;
                sum = 0;
            }
        }

        return count;
    }
};