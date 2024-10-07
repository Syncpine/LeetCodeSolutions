class Solution {
public:
    bool checkString(const std::string& s)
    {
        bool flag = false;

        for(auto ch : s)
        {
            if(ch == 'a')
            {
                if(flag)
                {
                    return false;
                }
            }
            else
            {
                flag = true;
            }
        }

        return true;
    }
};