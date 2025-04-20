class Solution {
public:
    std::vector<int> numberGame(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        const int numsSize = nums.size();

        int index = 0;

        for(index = 0; index < numsSize; index += 2)
        {
            std::swap(nums[index], nums[index + 1]);
        }

        return nums;
    }
};