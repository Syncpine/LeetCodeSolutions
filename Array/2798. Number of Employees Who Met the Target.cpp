class Solution {
public:
    int numberOfEmployeesWhoMetTarget(const std::vector<int>& hours, const int target)
    {
        int total = 0;

        for(auto hour : hours)
        {
            if(hour >= target)
            {
                ++total;
            }
        }

        return total;
    }
};