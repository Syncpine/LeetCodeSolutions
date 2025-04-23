class Solution {
public:
    int minimumCost(const std::vector<int>& nums)
    {
        const int n = nums.size();

        int index = 0;

        std::vector<int> vec = { std::min(nums[1], nums[2]), std::max(nums[1], nums[2]) };

        for(index = 3; index < n; ++index)
        {
            if(nums[index] < vec[1])
            {
                vec[1] = nums[index];

                if(vec[1] < vec[0])
                {
                    std::swap(vec[0], vec[1]);
                }
            }
        }

        return nums[0] + vec[0] + vec[1];
    }
};