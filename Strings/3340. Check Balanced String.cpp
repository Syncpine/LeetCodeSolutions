class Solution {
public:
    bool isBalanced(const std::string& num)
    {
        int sum = 0;

        bool flag = true;

        for(auto ch : num)
        {
            if(flag)
            {
                sum += (ch - '0');
                flag = false;
            }
            else
            {
                sum -= (ch - '0');
                flag = true;
            }
        }

        return (sum == 0);
    }
};