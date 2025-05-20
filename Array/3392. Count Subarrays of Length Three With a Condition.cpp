class Solution {
public:
    int countSubarrays(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        int ans = 0;

        for(index = 0; index < numsSize - 2; ++index)
        {
            if((nums[index] + nums[index + 2]) * 2 == nums[index + 1])
            {
                ++ans;
            }
        }

        return ans;
    }
};