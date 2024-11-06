class Solution {
public:
    std::string removeTrailingZeros(const std::string& num)
    {
        int end = num.length() - 1;

        while(end >= 0)
        {
            if('0' != num[end])
            {
                break;
            }

            --end;
        }

        return num.substr(0, end + 1);
    }
};