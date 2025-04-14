class Solution {
public:
    int findNonMinOrMax(const std::vector<int>& nums)
    {
        int minNum = nums[0];
        int maxNum = nums[0];

        for(auto num : nums)
        {
            minNum = std::min(num, minNum);
            maxNum = std::max(num, maxNum);
        }

        for(auto num : nums)
        {
            if(num != minNum && num != maxNum)
            {
                return num;
            }
        }

        return -1;
    }
};