class Solution {
public:
    std::string convertToTitle(int columnNumber)
    {
        std::string ret = "";

        while(0 < columnNumber)
        {
            int mod = columnNumber % 26;
            columnNumber = (columnNumber) / 26;

            char ch = (0 == mod) ? 'Z' : ('A' + mod - 1);
            columnNumber = (0 == mod) ? (columnNumber - 1) : columnNumber;

            ret = ch + ret;
        }

        return ret;
    }
};