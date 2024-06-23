class Solution1 {
public:
    int titleToNumber(const std::string& columnTitle)
    {
        int ret = 0;

        int index = columnTitle.length() - 1;
        long long cc = 1;

        while(0 <= index)
        {
            ret += (columnTitle[index] - 'A' + 1) * cc;

            cc *= 26;
            --index;
        }

        return ret;
    }
};