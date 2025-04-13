class Solution {
public:
    int semiOrderedPermutation(std::vector<int>& nums)
    {
        const int n = nums.size();

        int index = 0;

        int minOperation = 0;

        for(index = 0; index < n; ++index)
        {
            if(nums[index] == 1)
            {
                break;
            }
        }

        while(nums[0] != 1)
        {
            std::swap(nums[index - 1], nums[index]);
            --index;
            ++minOperation;
        }

        for(index = 0; index < n; ++index)
        {
            if(nums[index] == n)
            {
                break;
            }
        }

        while(nums[n - 1] != n)
        {
            std::swap(nums[index], nums[index + 1]);
            ++index;
            ++minOperation;
        }

        return minOperation;
    }
};