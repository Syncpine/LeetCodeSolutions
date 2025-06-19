class Solution {
public:
    bool haveConflict(const std::vector<std::string>& event1, const std::vector<std::string>& event2)
    {
        if(Func(event1[0], event2[0]))
        {
            return Func(event2[0], event1[1]);
        }
        else
        {
            return Func(event1[0], event2[1]);
        }
    }

private:
    // str1 < str2
    // HH:MM
    bool Func(const std::string str1, const std::string str2)
    {
        if(str1[0] < str2[0])
        {
            return true;
        }
        else if(str1[0] == str2[0])
        {
            if(str1[1] < str2[1])
            {
                return true;
            }
            else if(str1[1] == str2[1])
            {
                if(str1[3] < str2[3])
                {
                    return true;
                }
                else if(str1[3] == str2[3])
                {
                    if(str1[4] <= str2[4])
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};