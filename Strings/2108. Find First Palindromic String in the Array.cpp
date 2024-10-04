class Solution {
public:
    std::string firstPalindrome(const std::vector<std::string>& words)
    {
        for(auto str : words)
        {
            int start = 0;
            int end = str.length() - 1;

            while(start < end)
            {
                if(str[start] == str[end])
                {
                    ++start;
                    --end;
                }
                else
                {
                    break;
                }
            }

            if(start >= end)
            {
                return str;
            }
        }

        return "";
    }
};