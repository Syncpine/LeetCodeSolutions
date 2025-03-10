class Solution {
public:
    int smallestEqual(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        for(index = 0; index < numsSize; ++index)
        {
            if(index % 10 == nums[index])
            {
                return index;
            }
        }

        return -1;
    }
};