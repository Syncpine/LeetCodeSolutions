class Solution {
public:
    int repeatedNTimes(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        for(auto num : nums)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, 1 } );
            }
            else
            {
                ++mapNums[num];
            }
        }

        const int count = nums.size() / 2;

        for(const auto& itor : mapNums)
        {
            if(itor.second == count)
            {
                return itor.first;
            }
        }

        return 0;
    }
};