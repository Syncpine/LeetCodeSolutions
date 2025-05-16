class Solution {
public:
    int countValidSelections(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        int leftSum = 0;
        int rightSum = 0;

        for(index = 0; index < numsSize; ++index)
        {
            rightSum += nums[index];
        }

        index = 0;

        int ans = 0;

        while(index < numsSize)
        {
            rightSum -= nums[index];

            if(nums[index] == 0)
            {
                if(std::abs(leftSum - rightSum) == 0)
                {
                    ans += 2;
                }
                else if(std::abs(leftSum - rightSum) == 1)
                {
                    ans += 1;
                }
            }

            leftSum += nums[index];

            ++index;
        }

        return ans;
    }
};