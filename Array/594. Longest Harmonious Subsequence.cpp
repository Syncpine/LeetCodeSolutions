class Solution {
public:
    int findLHS(const vector<int>& nums)
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

        int maxLen = 0;

        auto itor = mapNums.begin();
        auto itor_2 = itor;

        ++itor_2;

        while(mapNums.end() != itor_2)
        {
            if(itor_2->first - itor->first == 1)
            {
                int len = itor_2->second + itor->second;
                maxLen = (len > maxLen) ? len : maxLen;
            }

            itor = itor_2;
            ++itor_2;
        }

        return maxLen;
    }
};