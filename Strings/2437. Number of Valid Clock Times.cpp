class Solution {
public:
    int countTime(const std::string& time)
    {
        int count = 1;

        if('?' == time[0])
        {
            if('?' == time[1])
            {
                count *= 24;
            }
            else if('0' <= time[1] && time[1] <= '3')
            {
                count *= 3;
            }
            else
            {
                count *= 2;
            }
        }
        else if('2' == time[0])
        {
            if('?' == time[1])
            {
                count *= 4;
            }
        }
        else
        {
            if('?' == time[1])
            {
                count *= 10;
            }
        }

        if('?' == time[3])
        {
            count *= 6;
        }

        if('?' == time[4])
        {
            count *= 10;
        }

        return count;
    }
};