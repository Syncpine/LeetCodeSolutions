class Solution {
public:
    double calculateTax(const std::vector<std::vector<int>>& brackets, int income)
    {
        int total = 0;

        int index = 0;

        int lastUpper = 0;

        while(income > 0)
        {
            int diff = brackets[index][0] - lastUpper;
            int theUpper = (diff < income) ? diff : income;

            total += theUpper * brackets[index][1];
            income -= theUpper;

            lastUpper = brackets[index][0];
            ++index;
        }

        return 1.0 * total / 100;
    }
};