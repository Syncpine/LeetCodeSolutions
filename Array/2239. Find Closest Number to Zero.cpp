class Solution {
public:
    int findClosestNumber(const std::vector<int>& nums)
    {
        int ret = nums[0];
        int len = std::abs(nums[0] - 0);

        for(auto num : nums)
        {
            int tmp = std::abs(num - 0);

            if(tmp < len)
            {
                len = tmp;
                ret = num;
            }
            else if(tmp == len)
            {
                ret = std::max(num, ret);
            }
        }

        return ret;
    }
};