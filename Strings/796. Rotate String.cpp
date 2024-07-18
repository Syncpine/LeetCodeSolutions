class Solution {
public:
    bool rotateString(const std::string& s, const std::string& goal)
    {
        if(s.length() != goal.length())
        {
            return false;
        }

        const int strLength = s.length();

        int index1 = 0;
        int index2 = 0;

        while(index1 < strLength)
        {
            int start = index1;
            index2 = 0;

            while(index2 < strLength)
            {
                if(s[start] != goal[index2])
                {
                    break;
                }

                ++start;
                ++index2;

                start = ((start == strLength) ? 0 : start);
            }

            if(index2 == strLength)
            {
                return true;
            }

            ++index1;
        }

        return false;
    }
};