class Solution {
public:
    std::vector<int> leftRightDifference(const std::vector<int>& nums)
    {
        const int n = nums.size();
        int index = 0;

        int leftSum = 0;
        int rightSum = 0;

        for(index = 1; index < n; ++index)
        {
            rightSum += nums[index];
        }

        std::vector<int> answer(n, 0);

        index = 0;

        while(index < n)
        {
            answer[index] = std::abs(leftSum - rightSum);

            leftSum += nums[index];

            ++index;

            if(index < n)
            {
                rightSum -= nums[index];
            }
        }

        return answer;
    }
};