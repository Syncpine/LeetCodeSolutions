class Solution {
public:
    bool check(const vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;
        int end = 0;

        for(index = 1; index < numsSize; ++index)
        {
            if(nums[index - 1] > nums[index])
            {
                end = index - 1;
                break;
            }
        }

        if(index == numsSize)
        {
            return true;
        }

        for(index = index + 1; index < numsSize; ++index)
        {
            if(nums[index - 1] > nums[index])
            {
                return false;
            }
        }

        return nums[index - 1] <= nums[0];
    }
};