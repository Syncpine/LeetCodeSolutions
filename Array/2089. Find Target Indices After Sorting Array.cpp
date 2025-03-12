class Solution {
public:
    std::vector<int> targetIndices(std::vector<int>& nums, const int target)
    {
        std::sort(nums.begin(), nums.end());

        const int numsSize = nums.size();
        int index = 0;

        std::vector<int> targetIndex;

        for(index = 0; index < numsSize; ++index)
        {
            if(nums[index] == target)
            {
                targetIndex.push_back(index);
            }
        }

        return targetIndex;
    }
};