class Solution {
public:
    int minOperations(const std::vector<int>& nums, const int k)
    {
        int count = 0;

        for(auto num : nums)
        {
            if(num < k)
            {
                ++count;
            }
        }

        return count;
    }
};