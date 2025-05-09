class Solution {
public:
    bool canAliceWin(const std::vector<int>& nums)
    {
        int sum_1 = 0;
        int sum_2 = 0;

        for(auto num : nums)
        {
            if(num < 10)
            {
                sum_1 += num;
            }
            else
            {
                sum_2 += num;
            }
        }

        return sum_1 != sum_2;
    }
};