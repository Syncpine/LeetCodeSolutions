class Solution {
public:
    bool kLengthApart(const std::vector<int>& nums, const int k)
    {
        const int numsSize = nums.size();
        int index = 0;

        int count_0 = k;

        for(index = 0; index < numsSize; ++index)
        {
            if(nums[index] == 1)
            {
                if(count_0 < k)
                {
                    return false;
                }

                count_0 = 0;
            }
            else
            {
                ++count_0;
            }
        }

        return true;
    }
};