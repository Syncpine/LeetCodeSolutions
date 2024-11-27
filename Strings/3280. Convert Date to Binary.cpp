class Solution {
public:
    std::string convertDateToBinary(const std::string& date)
    {
        std::string retStr = "";

        // year

        int int_year = (date[0] - '0') * 1000 + (date[1] - '0') * 100 + (date[2] - '0') * 10 + (date[3] - '0');

        std::string str_year = "";

        while(int_year > 0)
        {
            char tmp = int_year % 2 + '0';
            str_year = tmp + str_year;
            int_year /= 2;
        }

        retStr = retStr + str_year + '-';

        // month

        int int_month = (date[5] - '0') * 10 + (date[6] - '0');

        std::string str_month = "";

        while(int_month > 0)
        {
            char tmp = int_month % 2 + '0';
            str_month = tmp + str_month;
            int_month /= 2;
        }

        retStr = retStr + str_month + '-';

        // day

        int int_day = (date[8] - '0') * 10 + (date[9] - '0');

        std::string str_day = "";

        while(int_day > 0)
        {
            char tmp = int_day % 2 + '0';
            str_day = tmp + str_day;
            int_day /= 2;
        }

        retStr = retStr + str_day;

        return retStr;
    }
};