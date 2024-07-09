class Solution {
public:
    std::string reverseStr(std::string& s, const int& k)
    {
        const int strLength = s.length();

        int start = 0;
        int end = 0;

        bool flag = true; 

        for(int index = 0; index < strLength; index += k)
        {
            start = index;
            end = start + k - 1;

            if(end >= strLength)
            {
                end = strLength - 1;
            }

            if(flag)
            {
                while(start < end)
                {
                    std::swap(s[start], s[end]);
                    ++start;
                    --end;
                }
            }

            flag = !flag;
        }

        return s;
    }
};