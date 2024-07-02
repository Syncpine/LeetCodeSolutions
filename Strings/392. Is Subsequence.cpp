class Solution {
public:
    bool isSubsequence(const std::string& s, const std::string& t)
    {
        const int s_strLength = s.length();
        const int t_strLength = t.length();

        int index1 = 0;
        int index2 = 0;

        while(index1 < s_strLength)
        {
            while(index2 < t_strLength)
            {
                if(s[index1] == t[index2])
                {
                    break;
                }

                ++index2;
            }

            if(index2 >= t_strLength)
            {
                break;
            }

            ++index1;
            ++index2;
        }

        return index1 >= s_strLength;
    }
};