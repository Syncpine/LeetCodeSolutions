class Solution {
public:
    std::vector<std::vector<int>> mergeArrays(std::vector<std::vector<int>>& nums1, std::vector<std::vector<int>>& nums2)
    {
        int nums1Size = nums1.size();
        int nums2Size = nums2.size();

        std::map<int, int> mapNums;

        for(auto vec : nums1)
        {
            mapNums.insert( { vec[0], vec[1] } );
        }

        for(auto vec : nums2)
        {
            if(mapNums.end() == mapNums.find(vec[0]))
            {
                mapNums.insert( { vec[0], vec[1] } );
            }
            else
            {
                mapNums[ vec[0] ] += vec[1];
            }
        }

        std::vector<std::vector<int>> retNums;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            retNums.push_back( { itor->first, itor->second } );
            ++itor;
        }

        return retNums;
    }
};