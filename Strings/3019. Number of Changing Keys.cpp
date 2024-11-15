class Solution {
public:
    int countKeyChanges(const std::string& s)
    {
        int count = 0;

        char pre = std::toupper(s[0]);

        for(auto ch : s)
        {
            char cur = std::toupper(ch);

            if(pre != cur)
            {
                ++count;
            }

            pre = cur;
        }

        return count;
    }
};