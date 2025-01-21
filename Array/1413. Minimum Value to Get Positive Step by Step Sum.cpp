class Solution {
public:
    int minStartValue(const std::vector<int>& nums)
    {
        int startValue = 1;

        int total = startValue;

        for(auto num : nums)
        {
            total += num;

            if(total < 1)
            {
                int cc = 1 - total;

                startValue += cc;
                total += cc;
            }
        }

        return startValue;
    }
};