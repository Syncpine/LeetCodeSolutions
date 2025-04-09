class Solution {
public:
    int maximizeSum(const std::vector<int>& nums, int k)
    {
        int maxNum = 0;

        for(auto num : nums)
        {
            maxNum = std::max(num, maxNum);
        }

        int total = 0;

        while(k--)
        {
            total += maxNum;
            ++maxNum;
        }

        return total;
    }
};