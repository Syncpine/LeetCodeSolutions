class Solution {
public:
    double average(const std::vector<int>& salary)
    {
        int total = 0;

        int minSalary = salary[0];
        int maxSalary = salary[0];

        for(auto num : salary)
        {
            total += num;

            minSalary = (num < minSalary) ? num : minSalary;
            maxSalary = (num > maxSalary) ? num : maxSalary;
        }

        total -= (minSalary + maxSalary);

        return total * 1.0 / (salary.size() - 2);
    }
};