class Solution {
public:
    int sumOfUnique(const std::vector<int>& nums)
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

        int total = 0;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second == 1)
            {
                total += itor->first;
            }

            ++itor;
        }

        return total;
    }
};