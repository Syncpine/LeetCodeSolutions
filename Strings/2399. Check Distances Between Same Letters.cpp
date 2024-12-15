class Solution {
public:
    bool checkDistances(const std::string& s, const std::vector<int>& distance)
    {
        const int sLength = s.length();
        int index = 0;

        for(index = 0; index < sLength; ++index)
        {
            const char ch = s[index];

            int len = distance[ch - 'a'] + 1;

            bool flag = false;

            if(0 <= index - len)
            {
                if(ch == s[index - len])
                {
                    flag = true;
                }
            }

            if(index + len <= sLength)
            {
                if(ch == s[index + len])
                {
                    flag = true;
                }
            }

            if(!flag)
            {
                return false;
            }
        }

        return true;
    }
};