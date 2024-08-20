class Solution {
public:
    std::string thousandSeparator(int n)
    {
        if(n == 0)
        {
            return std::string("0");
        }

        std::string retStr = "";

        int count = 0;

        while(n > 0)
        {
            auto cur = n % 10;
            n /= 10;

            retStr = std::to_string(cur) + retStr;
            
            ++count;

            if(count >= 3 && n > 0)
            {
                retStr = '.' + retStr;
                count = 0;
            }
        }

        return retStr;
    }
};