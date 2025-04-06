class Solution {
public:
    int minNumber(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        std::map<int, std::vector<int>> mapNums;

        for(auto num : nums1)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, { 1, 0 } } );
            }
            else
            {
                mapNums[num][0] = 1;
            }
        }

        for(auto num : nums2)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, { 0, 1 } } );
            }
            else
            {
                mapNums[num][1] = 1;
            }
        }

        int minValue1 = nums1[0];
        int minValue2 = nums2[0];

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[0] == 1 && itor->second[1] == 0)
            {
                minValue1 = std::min(itor->first, minValue1);
            }
            else if(itor->second[0] == 0 && itor->second[1] == 1)
            {
                minValue2 = std::min(itor->first, minValue2);
            }
            else if(itor->second[0] == 1 && itor->second[1] == 1)
            {
                return itor->first;
            }

            ++itor;
        }

        int pos1 = std::min(minValue1, minValue2);
        int pos2 = std::max(minValue1, minValue2);

        return 10 * pos1 + pos2;
    }
};