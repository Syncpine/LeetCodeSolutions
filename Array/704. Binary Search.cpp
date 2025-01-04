class Solution {
public:
    int search(const std::vector<int>& nums, const int target)
    {
        const int numsSize = nums.size();
        int index = 0;

        while(index < numsSize)
        {
            if(target < nums[index])
            {
                return -1;
            }
            else if(target == nums[index])
            {
                return index;
            }

            ++index;
        }

        return -1;
    }
};