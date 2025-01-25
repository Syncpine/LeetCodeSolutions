class Solution {
public:
    std::vector<int> createTargetArray(const std::vector<int>& nums, const std::vector<int>& index)
    {
        std::vector<int> target;

        const int numsSize = nums.size();
        int ii = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            int pos = index[ii];
            target.insert(target.begin() + pos, nums[ii]);
        }

        return target;
    }
};