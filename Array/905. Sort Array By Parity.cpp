class Solution {
public:
    std::vector<int> sortArrayByParity(std::vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        while(start < end)
        {
            while(start < end)
            {
                if(nums[start] % 2 == 1)
                {
                    break;
                }

                ++start;
            }

            while(start < end)
            {
                if(nums[end] % 2 == 0)
                {
                    break;
                }

                --end;
            }

            if(start < end)
            {
                std::swap(nums[start], nums[end]);
            }
        }

        return nums;
    }
};