class Solution {
public:
    int removeElement(std::vector<int>& nums, const int& val)
    {
        auto vecSize = nums.size();
        auto index = 0;

        for(int ii = 0; ii < vecSize; ++ii)
        {
            if(val != nums[ii])
            {
                std::swap(nums[index], nums[ii]);
                ++index;
            }
        }

        return index;
    }
};