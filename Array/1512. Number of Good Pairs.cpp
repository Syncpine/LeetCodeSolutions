class Solution {
public:
    int numIdenticalPairs(const std::vector<int>& nums)
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
            if(itor->second >= 2)
            {
                for(int ii = 0; ii < itor->second; ++ii)
                {
                    total += ii;
                }
            }

            ++itor;
        }

        return total;
    }
};