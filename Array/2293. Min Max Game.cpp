class Solution {
public:
    int minMaxGame(std::vector<int>& nums)
    {
        int len = nums.size();

        int index = 0;

        while(len != 1)
        {
            for(index = 0; index < len / 2; ++index)
            {
                if(index % 2 == 0)
                {
                    nums[index] = std::min(nums[2 * index], nums[2 * index + 1]);
                }
                else
                {
                    nums[index] = std::max(nums[2 * index], nums[2 * index + 1]);
                }
            }

            len /= 2;
        }

        return nums[0];
    }
};