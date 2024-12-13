class Solution {
public:
    int removePalindromeSub(const std::string& s)
    {
        int start = 0;
        int end = s.length() - 1;

        while(start < end)
        {
            if(s[start] != s[end])
            {
                return 2;
            }

            ++start;
            --end;
        }

        return 1;
    }
};