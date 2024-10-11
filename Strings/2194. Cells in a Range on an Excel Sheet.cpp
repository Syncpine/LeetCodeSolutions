class Solution {
public:
    std::vector<std::string> cellsInRange(const std::string& s)
    {
        std::vector<std::string> vec((s[3] - s[0] + 1) * (s[4] - s[1] + 1), "");
        size_t index = 0;

        for(char ii = s[0]; ii <= s[3]; ++ii)
        {
            std::string str(2, ' ');
            str[0] = ii;

            for(char jj = s[1]; jj <= s[4]; ++jj)
            {
                str[1] = jj;
                vec[index++] = str;
            }
        }

        return vec;
    }
};