class Solution {
public:
    bool isMonotonic(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        bool flag = false;

        while(index < numsSize - 1)
        {
            std::cout << index << std::endl;

            if(nums[index] == nums[index + 1])
            {
                ++index;
                continue;
            }

            if(nums[index] < nums[index + 1])
            {
                while(index < numsSize - 1)
                {
                    if(nums[index] > nums[index + 1])
                    {
                        return false;
                    }

                    ++index;
                }
            }
            else if(nums[index] > nums[index + 1])
            {
                while(index < numsSize - 1)
                {
                    if(nums[index] < nums[index + 1])
                    {
                        return false;
                    }

                    ++index;
                }
            }
        }

        return true;
    }
};