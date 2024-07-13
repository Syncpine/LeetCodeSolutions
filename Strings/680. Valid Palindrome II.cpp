class Solution {
public:
    bool validPalindrome(const std::string& s)
    {
        int start = 0;
        int end = s.length() - 1;

        while(start < end)
        {
            if(s[start] != s[end])
            {
                return _validPalindrome(s, start, end);
            }

            ++start;
            --end;
        }

        return true;
    }

private:
    bool _validPalindrome(const std::string& s, int start, int end)
    {
        int start2 = start + 1;
        int end2 = end;

        end = end - 1;

        bool flag1 = true;
        bool flag2 = true;

        while(start < end && start2 < end2)
        {
            if(!flag1 && !flag2)
            {
                return false;
            }

            if(flag1)
            {
                if(s[start] != s[end])
                {
                    flag1 = false;
                }
            }

            if(flag2)
            {
                if(s[start2] != s[end2])
                {
                    flag2 = false;
                }
            }

            ++start;
            --end;

            ++start2;
            --end2;
        }

        return flag1 || flag2;
    }
};