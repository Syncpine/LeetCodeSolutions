class Solution {
public:
    int maxProduct(std::vector<int>& nums)
    {
        const int nusmSize = nums.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < 2; ++ii)
        {
            int k = ii;

            for(jj = ii + 1; jj < nusmSize; ++jj)
            {
                if(nums[k] < nums[jj])
                {
                    k = jj;
                }
            }

            std::swap(nums[ii], nums[k]);
        }

        return (nums[0] - 1) * (nums[1] - 1);
    }
};