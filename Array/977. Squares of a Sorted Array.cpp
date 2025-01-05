class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int start = 0;
        int end = numsSize - 1;

        std::vector<int> retNums(numsSize, 0);

        int index = numsSize - 1;

        while(index >= 0)
        {
            int num1 = std::abs(nums[start]);
            int num2 = std::abs(nums[end]);

            if(num1 >= num2)
            {
                retNums[index] = num1 * num1;
                ++start;
            }
            else
            {
                retNums[index] = num2 * num2;
                --end;
            }

            --index;
        }

        return retNums;
    }
};