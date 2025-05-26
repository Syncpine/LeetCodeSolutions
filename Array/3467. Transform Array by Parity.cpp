class Solution {
public:
    std::vector<int> transformArray(const std::vector<int>& nums)
    {
        std::vector<int> ans(nums.size(), 1);

        int count_0 = 0;

        for(auto num : nums)
        {
            if(num % 2 == 0)
            {
                ++count_0;
            }
        }

        while(count_0--)
        {
            ans[count_0] = 0;
        }

        return ans;
    }
};