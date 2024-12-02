class Solution {
public:
    int minOperations(const std::string& s)
    {
        int ret_0 = 0;
        int ret_1 = 0;

        char cur = '0';

        for(auto ch : s)
        {
            if(ch != cur)
            {
                ++ret_0;
            }

            if(cur == '1')
            {
                cur = '0';
            }
            else
            {
                cur = '1';
            }
        }

        cur = '1';

        for(auto ch : s)
        {
            if(ch != cur)
            {
                ++ret_1;
            }

            if(cur == '1')
            {
                cur = '0';
            }
            else
            {
                cur = '1';
            }
        }

        return std::min(ret_0, ret_1);
    }
};