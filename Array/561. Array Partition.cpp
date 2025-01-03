class Solution {
public:
    int arrayPairSum(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        const int numsSize = nums.size();
        int index = 0;

        int total = 0;

        while(index < numsSize)
        {
            total += nums[index];

            index += 2;
        }

        return total;
    }
};