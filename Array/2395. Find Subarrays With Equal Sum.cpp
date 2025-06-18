class Solution {
public:
    bool findSubarrays(std::vector<int>& nums)
    {
        const int numsSize = nums.size();

        int index = 0;

        std::set<int> setNums;

        for(index = 0; index < numsSize - 1; ++index)
        {
            int total = nums[index] + nums[index + 1];

            if(setNums.end() != setNums.find(total))
            {
                return true;
            }

            setNums.insert(total);
        }

        return false;
    }
};