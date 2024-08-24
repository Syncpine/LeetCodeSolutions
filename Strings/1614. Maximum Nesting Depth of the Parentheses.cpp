class Solution {
public:
    int maxDepth(const std::string& s)
    {
        int ret = 0;

        int curMax = 0;

        for(auto ch : s)
        {
            if(ch == '(')
            {
                ++curMax;
            }
            else if(ch == ')')
            {
                --curMax;
            }

            ret = (curMax > ret) ? curMax : ret;
        }

        return ret;
    }
};