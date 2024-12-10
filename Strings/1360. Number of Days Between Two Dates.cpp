class Solution {
public:
    int daysBetweenDates(const std::string& date1, const std::string& date2)
    {
        int year1 = std::stoi(date1.substr(0, 4));
        int month1 = std::stoi(date1.substr(5, 2));
        int day1 = std::stoi(date1.substr(8, 2));

        int year2 = std::stoi(date2.substr(0, 4));
        int month2 = std::stoi(date2.substr(5, 2));
        int day2 = std::stoi(date2.substr(8, 2));

        int days1 = GetDays(year1, month1, day1);
        int days2 = GetDays(year2, month2, day2);

        return std::abs(days1 - days2);
    }

private:
    int GetDays(const int year, const int month, const int day)
    {
        int days = day;

        for(int yy = 1970; yy < year; ++yy)
        {
            days += 365 + IsSpecialYear(yy);
        }

        for(int mm = 1; mm < month; ++mm)
        {
            days += m_DayofMonth[mm];
        }

        if(IsSpecialYear(year) && month > 2)
        {
            days += 1;
        }

        return days;
    }

    bool IsSpecialYear(const int year)
    {
        return (year % 400 == 0)
            || ((year % 4 == 0) && (year % 100 != 0));
    }

    const std::vector<int> m_DayofMonth = 
    {
        0, 
        31, 28, 31, 
        30, 31, 30, 
        31, 31, 30, 
        31, 30, 31, 
    };
};