class Solution {
public:
    int possibleStringCount(const std::string& word)
    {
        int count = 1;

        char pre = word[0] + 1;

        for(auto ch : word)
        {
            if(pre == ch)
            {
                ++count;
            }

            pre = ch;
        }

        return count;
    }
};