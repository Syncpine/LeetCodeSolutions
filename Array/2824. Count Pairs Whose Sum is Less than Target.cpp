class Solution {
public:
    int countPairs(const std::vector<int>& nums, const int target)
    {
        const int n = nums.size();

        int ii = 0;
        int jj = 0;

        int count = 0;

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = ii + 1; jj < n; ++jj)
            {
                if(nums[ii] + nums[jj] < target)
                {
                    ++count;
                }
            }
        }

        return count;
    }
};