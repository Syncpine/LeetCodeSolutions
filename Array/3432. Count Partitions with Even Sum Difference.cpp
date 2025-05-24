class Solution {
public:
    int countPartitions(const std::vector<int>& nums)
    {
        const int numsSize =  nums.size();

        int index = 0;

        int leftSum = nums[0];
        int rightSum = 0;

        for(index = 1; index < numsSize; ++index)
        {
            rightSum += nums[index];
        }

        index = 0;

        int ans = 0;

        while(true)
        {
            if((leftSum - rightSum) % 2 == 0)
            {
                ++ans;
            }

            ++index;

            if(index >= numsSize - 1)
            {
                return ans;
            }

            leftSum += nums[index];
            rightSum -= nums[index];
        }

        return ans;
    }
};