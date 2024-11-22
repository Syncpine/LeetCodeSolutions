class Solution {
public:
    int minimumChairs(const std::string& s)
    {
        int ans = 0;

        int cur = 0;

        for(auto ch : s)
        {
            if('E' == ch)
            {
                ++cur;
                ans = std::max(ans, cur);
            }
            else
            {
                --cur;
            }
        }

        return ans;
    }
};