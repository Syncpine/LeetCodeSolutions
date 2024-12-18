class Solution {
public:
    double findMaxAverage(const std::vector<int>& nums, const int k)
    {
        double maxAverage = 0.0;

        int curSum = 0;

        const int numsSize = nums.size();
        int index = 0;

        while(index < k)
        {
            curSum += nums[index];
            ++index;
        }

        maxAverage = curSum * 1.0 / k;

        while(index < numsSize)
        {
            curSum = curSum - nums[index - k] + nums[index];

            double curAvarage = curSum * 1.0 / k;
            maxAverage = (curAvarage > maxAverage) ? curAvarage : maxAverage;

            ++index;
        }

        return maxAverage;
    }
};