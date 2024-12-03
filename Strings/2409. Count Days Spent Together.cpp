class Solution {
public:
    int countDaysTogether(const std::string& arriveAlice, const std::string& leaveAlice, const std::string& arriveBob, const std::string& leaveBob)
    {
        std::vector<int> vec(4, 0);

        vec[0] = GetDays(arriveAlice);
        vec[1] = GetDays(leaveAlice);
        vec[2] = GetDays(arriveBob);
        vec[3] = GetDays(leaveBob);

        int start = std::max(vec[0], vec[2]) + 1;
        int end = std::min(vec[1], vec[3]) + 1;

        return ((start <= end) ? (end - start + 1) : 0);
    }

private:
    int GetDays(const std::string& str)
    {
        int month = std::stoi(str.substr(0, 2));
        int days = std::stoi(str.substr(3, 4)) + 1;

        while(--month > 0)
        {
            days += m_vecMonthDays[month];
        }

        return days;
    }

private:
    const std::vector<int> m_vecMonthDays = 
    {
        0, 
        31, 28, 31, 
        30, 31, 30, 
        31, 31, 30, 
        31, 30, 31, 
    };
};