class Solution {
public:
    int maxPower(const std::string& s)
    {
        int ret = 0;
        int cur = 0;

        const int strLength = s.length();
        int index = 1;

        cur = 1;

        for( ; index < strLength; ++index)
        {
            if(s[index] != s[index - 1])
            {
                ret = (ret < cur) ? cur : ret;
                cur = 1;
            }
            else
            {
                ++cur;
            }
        }

        ret = (ret < cur) ? cur : ret;

        return ret;
    }
};