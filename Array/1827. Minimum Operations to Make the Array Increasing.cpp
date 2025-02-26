class Solution {
public:
    int minOperations(const std::vector<int>& nums)
    {
        int total = 0;

        int last = nums[0] - 1;

        for(auto num : nums)
        {
            if(num <= last)
            {
                total += (last - num + 1);
                last += 1;
            }
            else
            {
                last = num;
            }
        }

        return total;
    }
};