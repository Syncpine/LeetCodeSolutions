class Solution {
public:
    int findLengthOfLCIS(const std::vector<int>& nums)
    {
        int maxCount = 0;
        int count = 1;

        int pre = nums[0];

        for(auto num : nums)
        {
            if(num > pre)
            {
                ++count;
            }
            else
            {
                count = 1;
            }

            maxCount = (count > maxCount) ? count : maxCount;

            pre = num;
        }

        return maxCount;
    }
};