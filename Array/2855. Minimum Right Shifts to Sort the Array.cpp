class Solution {
public:
    int minimumRightShifts(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        int minIndex = 0;

        for(index = 0; index < numsSize; ++index)
        {
            if(nums[index] < nums[minIndex])
            {
                minIndex = index;
            }
        }

        int minNum = nums[minIndex] - 1;

        for(index = minIndex; index < numsSize; ++index)
        {
            if(nums[index] < minNum)
            {
                return -1;
            }

            minNum = nums[index];
        }

        for(index = 0; index < minIndex; ++index)
        {
            if(nums[index] < minNum)
            {
                return -1;
            }

            minNum = nums[index];
        }

        return (numsSize - minIndex) % numsSize;
    }
};