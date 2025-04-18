class Solution {
public:
    int sumIndicesWithKSetBits(const std::vector<int>& nums, const int k)
    {
        int total = 0;

        const int numsSize = nums.size();

        int index = 0;

        for(index = 0; index < numsSize; ++index)
        {
            int count = 0;

            int tmp = index;
            while(tmp > 0)
            {
                count += tmp % 2;
                tmp = tmp / 2;
            }

            if(k == count)
            {
                total += nums[index];
            }
        }

        return total;
    }
};