class Solution {
public:
    std::vector<int> decompressRLElist(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int index = 0;

        std::vector<int> retVec;

        for(index = 0; index < numsSize; index += 2)
        {
            int count = nums[index];
            int num = nums[index + 1];

            while(count--)
            {
                retVec.push_back(num);
            }
        }

        return retVec;
    }
};