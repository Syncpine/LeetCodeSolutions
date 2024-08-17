#include <map>

class Solution {
public:
    std::string reformatDate(const std::string& date)
    {
        std::string newDate = "";

        int index = 0;

        newDate += date[0];
        ++index;

        if('0' <= date[1] && date[1] <= '9')
        {
            newDate += date[1];
            ++index;
        }
        else
        {
            newDate = "0" + newDate;
        }

        index += 3;

        const std::string month = date.substr(index, 3);
        std::cout << month << std::endl;

        std::string str = m_month2num[month];


        newDate = str + "-" + newDate;

        index += 4;

        newDate = date.substr(index, 4) + "-" + newDate;

        return newDate;
    }

private:
    std::map<std::string, std::string> m_month2num = 
    {
        { "Jan", "01" },
        { "Feb", "02" },
        { "Mar", "03" },
        { "Apr", "04" },
        { "May", "05" },
        { "Jun", "06" },
        { "Jul", "07" },
        { "Aug", "08" },
        { "Sep", "09" },
        { "Oct", "10" },
        { "Nov", "11" },
        { "Dec", "12" },
    };
};