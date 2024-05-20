class Solution {
public:
    void moveZeroes(std::vector<int>& nums)
    {
        auto index1 = 0, index2 = 0;
        const auto vecSize = nums.size();

        while(vecSize > index2)
        {
            if(0 != nums[index2])
            {
                nums[index1] = nums[index2];

                if(index1 != index2)
                {
                    nums[index2] = 0;
                }

                ++index1;
            }

            ++index2;
        }
    }
};