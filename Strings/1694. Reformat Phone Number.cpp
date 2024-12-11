class Solution {
public:
    std::string reformatNumber(const std::string& number)
    {
        std::string retStr = "";

        std::string numberStr = "";

        for(auto ch : number)
        {
            if('0' <= ch && ch <= '9')
            {
                numberStr += ch;
            }
        }

        int numberStrLength = numberStr.length();

        if(numberStrLength == 2)
        {
            return numberStr;
        }
        
        int index = 0;

        for(index = 0; index < numberStrLength - 4; index += 3)
        {
            retStr += numberStr.substr(index, 3) + '-';
        }

        if(index + 2 == numberStrLength)
        {
            retStr += numberStr.substr(index, 2);
        }
        else if(index + 3 == numberStrLength)
        {
            retStr += numberStr.substr(index, 3);
        }
        else if(index + 4 == numberStrLength)
        {
            retStr += numberStr.substr(index, 2) + "-";
            index += 2;
            retStr += numberStr.substr(index, 2);
        }

        return retStr;
    }
};