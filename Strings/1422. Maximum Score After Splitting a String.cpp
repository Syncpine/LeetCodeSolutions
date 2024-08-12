class Solution {
public:
    int maxScore(const std::string& s)
    {
        int ret = 0;
        int cur = 0;

        int count_0 = 0;
        int count_1 = 0;

        const int strLength = s.length();

        int index = 0;

        for(auto ch : s)
        {
            if(ch == '0')
            {
                ++count_0;
            }
            else
            {
                ++count_1;
            }
        }

        if(s[0] == '0')
        {
            cur = 1 + count_1;
            --count_0;
        }
        else
        {
            cur = 0 + count_1 - 1;
            --count_1;
        }

        ret = cur;

        for(int index = 1; index < strLength - 1; ++index)
        {
            if(s[index] == '0')
            {
                cur = cur + 1;
                --count_0;
            }
            else
            {
                cur = cur - 1;
                --count_1;
            }

            ret = (ret < cur) ? cur : ret;
        }

        return ret;
    }
};