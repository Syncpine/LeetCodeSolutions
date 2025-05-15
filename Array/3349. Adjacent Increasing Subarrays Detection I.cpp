class Solution {
public:
    bool hasIncreasingSubarrays(const std::vector<int>& nums, const int k)
    {
        const int numsSize = nums.size();

        int index = 0;
        int index2 = 0;

        for(index = 0; index < numsSize - 2 * k + 1; ++index)
        {
            bool flag = true;

            index2 = index;

            for(index2 = index2 + 1; index2 < index + k; ++index2)
            {
                if(nums[index2 - 1] >= nums[index2])
                {
                    flag = false;
                }
            }

            for(index2 = index2 + 1; index2 < index + 2 * k; ++index2)
            {
                if(nums[index2 - 1] >= nums[index2])
                {
                    flag = false;
                }
            }

            if(flag)
            {
                return true;
            }
        }

        return false;
    }
};