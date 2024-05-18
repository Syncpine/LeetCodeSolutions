class Solution {
public:
    int removeDuplicates(std::vector<int>& nums)
    {
        auto vecSize = nums.size();
        auto index = 0;

        for(int ii = 0; ii < vecSize; ++ii)
        {
            if(nums[ii] != nums[index])
            {
                index++;
                std::swap(nums[ii], nums[index]);
            }
        }

        return index + 1;
    }
};