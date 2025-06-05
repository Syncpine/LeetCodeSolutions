class Solution {
public:
    int largestPerimeter(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        int index = nums.size() - 3;

        while(index >= 0)
        {
            if(nums[index] + nums[index + 1] > nums[index + 2]
                && nums[index] + nums[index + 2] > nums[index + 1]
                && nums[index + 1] + nums[index + 2] > nums[index])
            {
                return nums[index] + nums[index + 1] + nums[index + 2];
            }

            --index;
        }

        return 0;
    }
};