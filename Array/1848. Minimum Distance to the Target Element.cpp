class Solution {
public:
    int getMinDistance(const std::vector<int>& nums, const int target, const int start)
    {
        const int numsSize = nums.size();
        int index = 0;

        int minDistance = numsSize;

        for(index = 0; index < numsSize; ++index)
        {
            if(target == nums[index])
            {
                int curDitance = std::abs(index - start);
                minDistance = std::min(curDitance, minDistance);
            }
        }

        return minDistance;
    }
};