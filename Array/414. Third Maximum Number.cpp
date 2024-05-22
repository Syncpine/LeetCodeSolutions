#include <algorithm>

class Solution {
public:
    int thirdMax(std::vector<int>& nums)
    {
        auto count = 2;
        const auto numSize = nums.size();

        std::sort(nums.begin(), nums.end());

        for(int index = numSize - 2; index >= 0; --index)
        {
            if(nums[index + 1] != nums[index])
            {
                --count;
            }

            if(0 == count)
            {
                return nums[index];
            }
        }

        return nums[numSize - 1];
    }
};