class Solution {
public:
    int sumOfSquares(const std::vector<int>& nums)
    {
        const int n = nums.size();

        int index = 0;

        int total = 0;

        for(index = 0; index < n; ++index)
        {
            if(n % (index + 1) == 0)
            {
                total += nums[index] * nums[index];
            }
        }

        return total;
    }
};