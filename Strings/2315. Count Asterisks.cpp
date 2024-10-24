class Solution {
public:
    int countAsterisks(const std::string& s)
    {
        int count = 0;

        bool flag = true;

        for(auto ch : s)
        {
            if('|' == ch)
            {
                flag = !flag;
                continue;
            }

            if(flag)
            {
                count += ('*' == ch);
            }
        }

        return count;
    }
};