class Solution {
public:
    std::vector<int> findDisappearedNumbers(const std::vector<int>& nums)
    {
        const auto numsSize = nums.size();
        std::vector<int> numVec(numsSize + 1, 0);
        std::vector<int> retVec;

        for(auto num : nums)
        {
            numVec[num] = 1;
        }

        for(int index = 1; index < numsSize + 1; ++index)
        {
            if(0 == numVec[index])
            {
                retVec.push_back(index);
            }
        }

        return retVec;
    }
};