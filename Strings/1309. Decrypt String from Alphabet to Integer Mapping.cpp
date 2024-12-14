class Solution {
public:
    std::string freqAlphabets(const std::string& s)
    {
        std::string retStr = "";

        const int sLength = s.length();
        int index = 0;

        for(index = 0; index < sLength - 2; ++index)
        {
            std::string curStr = "";

            if(s[index + 2] != '#')
            {
                curStr = s.substr(index, 1);
            }
            else
            {
                curStr = s.substr(index, 3);
                index += 2;
            }

            retStr += m_Str2Str[curStr];
        }

        if(index <= sLength)
        {
            retStr += m_Str2Str[s.substr(index, 1)];
            ++index;
        }

        if(index <= sLength)
        {
            retStr += m_Str2Str[s.substr(index, 1)];
        }

        return retStr;
    }

private:
    std::map<std::string, std::string> m_Str2Str = 
    {
        { "1", "a" }, 
        { "2", "b" }, 
        { "3", "c" }, 
        { "4", "d" }, 
        { "5", "e" }, 
        { "6", "f" }, 
        { "7", "g" }, 
        { "8", "h" }, 
        { "9", "i" }, 
        { "10#", "j" }, 
        { "11#", "k" }, 
        { "12#", "l" }, 
        { "13#", "m" }, 
        { "14#", "n" }, 
        { "15#", "o" }, 
        { "16#", "p" }, 
        { "17#", "q" }, 
        { "18#", "r" }, 
        { "19#", "s" }, 
        { "20#", "t" }, 
        { "21#", "u" }, 
        { "22#", "v" }, 
        { "23#", "w" }, 
        { "24#", "x" }, 
        { "25#", "y" }, 
        { "26#", "z" }, 
    };
};