class Solution {
public:
    std::string reverseOnlyLetters(std::string& s)
    {
        int start = 0;
        int end = s.length() - 1;

        while(start < end)
        {
            while(start < end && !std::islower(s[start]) && !std::isupper(s[start]))
            {
                ++start;
            }

            while(start < end && !std::islower(s[end]) && !std::isupper(s[end]))
            {
                --end;
            }

            if(start < end)
            {
                swap(s[start], s[end]);
            }

            ++start;
            --end;
        }

        return s;
    }
};