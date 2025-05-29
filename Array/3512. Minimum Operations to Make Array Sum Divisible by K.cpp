class Solution {
public:
    int minOperations(const std::vector<int>& nums, const int k)
    {
        int total = 0;

        for(auto num : nums)
        {
            total += num;
        }

        return total - (total / k) * k;
    }
};