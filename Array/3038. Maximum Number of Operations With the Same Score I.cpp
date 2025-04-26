class Solution {
public:
    int maxOperations(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        const int score = nums[0] + nums[1];

        int count = 0;

        for(index = 0; index < numsSize; index += 2)
        {
            int sum = nums[index] + nums[index + 1];

            if(score != sum)
            {
                return count;
            }

            ++count;
        }

        return count;
    }
};