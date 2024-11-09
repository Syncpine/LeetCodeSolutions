class Solution {
public:
    std::string finalString(const std::string s)
    {
        std::string str = "";

        for(auto ch : s)
        {
            if('i' == ch)
            {
                int start = 0;
                int end = str.length() - 1;

                while(start < end)
                {
                    std::swap(str[start], str[end]);

                    ++start;
                    --end;
                }
            }
            else
            {
                str += ch;
            }
        }

        return str;
    }
};