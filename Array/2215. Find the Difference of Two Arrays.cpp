class Solution {
public:
    std::vector<std::vector<int>> findDifference(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        std::map<int, std::vector<int>> mapNums;

        for(auto num : nums1)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num , { 1 , 0 } } );
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
                mapNums.insert( { num , { 0 , 1 } } );
            }
            else
            {
                mapNums[num][1] = 1;
            }
        }

        std::vector<std::vector<int>> retNums(2, std::vector<int>());

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[0] == 1 && itor->second[1] != 1)
            {
                retNums[0].push_back(itor->first);
            }
            else if(itor->second[0] != 1 && itor->second[1] == 1)
            {
                retNums[1].push_back(itor->first);
            }

            ++itor;
        }

        return retNums;
    }
};