class Solution {
public:
    std::vector<int> shuffle(const std::vector<int>& nums, const int n)
    {
        std::vector<int> retNums(2 * n, 0);

        int ii = 0;

        for(ii = 0; ii < n; ++ii)
        {
            retNums[ 2 * ii ] = nums[ii];
            retNums[ 2 * ii + 1 ] = nums[ n + ii ];
        }

        return retNums;
    }
};