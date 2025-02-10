class Solution {
public:
    std::vector<int> runningSum(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        std::vector<int> vecSum(numsSize, 0);

        vecSum[0] = nums[0];

        for(index = 1; index < numsSize; ++index)
        {
            vecSum[index] = vecSum[index - 1] + nums[index];
        }

        return vecSum;
    }
};