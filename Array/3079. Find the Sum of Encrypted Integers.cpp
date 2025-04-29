class Solution {
public:
    int sumOfEncryptedInt(const std::vector<int>& nums)
    {
        int total = 0;

        for(auto num : nums)
        {
            int count = 0;
            int maxDigit = 0;

            while(num > 0)
            {
                int digit = num % 10;
                num = num / 10;
                maxDigit = std::max(digit, maxDigit);
                ++count;
            }

            int cc = 1;

            while(count--)
            {
                total += maxDigit * cc;
                cc = cc * 10;
            }
        }

        return total;
    }
};