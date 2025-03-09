class Solution {
public:
    std::vector<int> twoOutOfThree(const std::vector<int>& nums1, const std::vector<int>& nums2, const std::vector<int>& nums3)
    {
        std::map<int, std::vector<int>> mapNums;

        for(auto num : nums1)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num , std::vector<int>(3, 0) } );
            }

            mapNums[num][0] = 1;
        }

        for(auto num : nums2)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num , std::vector<int>(3, 0) } );
            }

            mapNums[num][1] = 1;
        }

        for(auto num : nums3)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num , std::vector<int>(3, 0) } );
            }

            mapNums[num][2] = 1;
        }

        std::vector<int> retNums;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[0] + itor->second[1] + itor->second[2] >= 2)
            {
                retNums.push_back(itor->first);
            }

            ++itor;
        }

        return retNums;
    }
};