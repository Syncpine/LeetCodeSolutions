class Solution {
public:
    bool isCovered(const std::vector<std::vector<int>>& ranges, const int left, const int right)
    {
        std::vector<int> nums(51, 0);

        nums[0] = 1;

        const int rangesSize = ranges.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < rangesSize; ++ii)
        {
            for(jj = ranges[ii][0]; jj <= ranges[ii][1]; ++jj)
            {
                nums[jj] = 1;
            }
        }

        for(ii = left; ii <= right; ++ii)
        {
            if(nums[ii] == 0)
            {
                return false;
            }
        }

        return true;
    }
};