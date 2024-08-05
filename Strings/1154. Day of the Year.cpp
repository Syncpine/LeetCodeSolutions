class Solution {
public:
    int dayOfYear(const std::string& date)
    {
        int year = std::stoi(date.substr(0, 4).c_str());
        int month = std::stoi(date.substr(5, 2).c_str());
        int day = std::atoi(date.substr(8, 2).c_str());

        int sum = 0;

        for(int index = 0; index < month; ++index)
        {
            sum += _DaysOfMonth[index];
        }

        sum += day;

        if(IsLeapYear(year) && month > 2)
        {
            ++sum;
        }

        return sum;
    }

private:
    bool IsLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

private:
    const static std::vector<int> _DaysOfMonth;
};

const std::vector<int> Solution::_DaysOfMonth = 
{
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
};