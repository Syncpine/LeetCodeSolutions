class Solution {
public:
    std::string largestGoodInteger(const std::string& num)
    {
        std::string retStr = "";

        const int strLength = num.length();
        int index = 0;

        while(index <= strLength - 3)
        {
            std::string tmp = num.substr(index, 3);

            if(tmp[0] == tmp[1] && tmp[1] == tmp[2])
            {
                if(retStr.empty())
                {
                    retStr = tmp;
                }
                else
                {
                    if(tmp[0] > retStr[0])
                    {
                        retStr = tmp;
                    }
                }
            }

            ++index;
        }

        return retStr;
    }
};