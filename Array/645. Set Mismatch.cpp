class Solution {
public:
    std::vector<int> findErrorNums(const std::vector<int>& nums)
    {
        const int numsSize = nums.size();
        int ii = 0;

        std::vector<int>vec(numsSize, 0);

        for(auto num : nums)
        {
            ++vec[num - 1];
        }

        std::vector<int> retVec(2, 0);

        for(ii = 0; ii < numsSize; ++ii)
        {
            if(vec[ii] == 2)
            {
                retVec[0] = ii + 1;
            }
            else if(vec[ii] == 0)
            {
                retVec[1] = ii + 1;
            }
        }

        return retVec;
    }
};