class Solution {
public:
    std::vector<int> twoSum(const std::vector<int>& nums, const int& target)
    {
        auto vecSize = nums.size();

        for(int ii = 0; ii < vecSize; ++ii)
        {
            for(int jj = ii + 1; jj < vecSize; ++jj)
            {
                if(nums[ii] + nums[jj] == target)
                {
                    return {ii, jj};
                }
            }
        }

        return {0, 0};
    }
};