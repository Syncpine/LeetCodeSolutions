class Solution {
public:
    int searchInsert(const std::vector<int>& nums, const int& target)
    {
        auto vecSize = nums.size();

        for(int index = 0; index < vecSize; ++index)
        {
            if(target <= nums[index])
            {
                return index;
            }
        }

        return vecSize;
    }
};