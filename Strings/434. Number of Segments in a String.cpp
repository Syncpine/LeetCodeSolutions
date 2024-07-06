class Solution {
public:
    int countSegments(const std::string& s)
    {
        int ret = 0;

        const int strLength = s.length();
        int index = 0;

        bool flag = false;

        while(index < strLength)
        {
            if(' ' == s[index])
            {
                if(flag)
                {
                    ++ret;
                }

                flag = false;
            }
            else
            {
                flag = true;
            }

            ++index;
        }

        if(flag)
        {
            ++ret;
        }

        return ret;
    }
};