class Solution {
public:
    int missingNumber(const std::vector<int>& nums)
    {
        auto vecSize = nums.size();

        std::vector<int> vec(vecSize + 1, 0);

        for(auto num : nums)
        {
            vec[num] = 1;
        }

        for(int index = 0; index <= vecSize; ++index)
        {
            if(0 == vec[index])
            {
                return index;
            }
        }

        return 0;
    }
};