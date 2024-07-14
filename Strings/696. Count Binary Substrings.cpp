class Solution {
public:
    int countBinarySubstrings(const std::string& s)
    {
        int sum = 0;

        const int strLength = s.length();
        int index = 1;

        int pre = 0;
        int cur = 1;

        while(index < strLength)
        {
            if(s[index - 1] != s[index])
            {
                sum += std::min(pre, cur);
                pre = cur;
                cur = 1;
            }
            else
            {
                ++cur;
            }

            ++index;
        }

        sum += std::min(pre, cur);

        return sum;
    }
};