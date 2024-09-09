class Solution {
public:
    bool checkZeroOnes(const std::string& s)
    {
        int max_0 = 0;
        int max_1 = 0;

        int count_0 = 0;
        int count_1 = 0;

        for(auto ch : s)
        {
            if(ch == '0')
            {
                ++count_0;
                count_1 = 0;
            }
            else
            {
                ++count_1;
                count_0 = 0;
            }

            max_0 = (count_0 > max_0) ? count_0 : max_0;
            max_1 = (count_1 > max_1) ? count_1 : max_1;
        }

        return max_1 > max_0;
    }
};