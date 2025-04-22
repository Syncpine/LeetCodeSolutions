class Solution {
public:
    int maxFrequencyElements(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        int maxCount = 0;

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

            maxCount = std::max(mapNums[num], maxCount);
        }

        int total = 0;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second == maxCount)
            {
                ++total;
            }

            ++itor;
        }

        return maxCount * total;
    }
};