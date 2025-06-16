class Solution {
public:
    int minimumOperations(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        int cur = nums[0];

        int count = (cur == 0 ? 0 : 1);

        for(auto num : nums)
        {
            if(num != cur)
            {
                ++count;
                cur = num;
            }
        }

        return count;
    }
};