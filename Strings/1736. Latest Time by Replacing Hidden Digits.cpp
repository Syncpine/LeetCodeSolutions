class Solution {
public:
    std::string maximumTime(const std::string& time)
    {
        std::string retStr = "";

        if(time[0] == '?')
        {
            if(time[1] == '?')
            {
                retStr += '2';
                retStr += '3';
            }
            else
            {
                if(time[1] > '3')
                {
                    retStr += '1';
                }
                else
                {
                    retStr += '2';
                }

                retStr += time[1];
            }
        }
        else
        {
            retStr += time[0];

            if(time[1] =='?')
            {
                if(time[0] == '2')
                {
                    retStr += '3';
                }
                else
                {
                    retStr += '9';
                }
            }
            else
            {
                retStr += time[1];
            }
        }

        retStr += ':';

        if(time[3] == '?')
        {
            retStr += '5';
        }
        else
        {
            retStr += time[3];
        }

        if(time[4] == '?')
        {
            retStr += '9';
        }
        else
        {
            retStr += time[4];
        }

        return retStr;
    }
};