class Solution {
public:
    std::string largestOddNumber(const std::string& num)
    {
        int index = num.length() - 1;

        while(index >= 0)
        {
            if((num[index] - '0') % 2 == 1)
            {
                break;
            }

            --index;
        }

        return num.substr(0, index + 1);
    }
};