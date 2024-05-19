class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits)
    {
        auto index = digits.size();
        bool flag = false;

        while(index--)
        {
            if(9 != digits[index])
            {
                ++digits[index];
                return digits;
            }
            else
            {
                digits[index] = 0;
                flag = true;
            }
        }

        if(flag && -1 == index)
        {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};