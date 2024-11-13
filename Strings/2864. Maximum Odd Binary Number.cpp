class Solution {
public:
    std::string maximumOddBinaryNumber(const std::string& s)
    {
        int count_0 = 0;
        int count_1 = 0;

        for(auto ch : s)
        {
            if('0' == ch)
            {
                ++count_0;
            }
            else
            {
                ++count_1;
            }
        }

        std::string retStr(count_1 - 1, '1');

        retStr += std::string(count_0, '0');

        retStr += '1';

        return retStr;
    }
};