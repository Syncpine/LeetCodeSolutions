class Solution {
public:
    std::vector<int> constructTransformedArray(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        std::vector<int> result(numsSize, 0);

        int pos = 0;

        for(index = 0; index < numsSize; ++index)
        {
            if(nums[index] > 0)
            {
                pos = (index + nums[index]) % numsSize;
            }
            else if(nums[index] < 0)
            {
                pos = ((index + nums[index]) % numsSize + numsSize) % numsSize;
            }
            else
            {
                pos = index;
            }

            result[index] = nums[pos];
        }

        return result;
    }
};