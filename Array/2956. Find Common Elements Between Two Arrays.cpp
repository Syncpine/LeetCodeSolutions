class Solution {
public:
    std::vector<int> findIntersectionValues(const std::vector<int>& nums1, const std::vector<int>& nums2)
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
                ++mapNums[num][0];
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
                ++mapNums[num][1];
            }
        }

        std::vector<int> answer(2, 0);

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[1] > 0)
            {
                answer[0] += itor->second[0];
            }

            if(itor->second[0] > 0)
            {
                answer[1] += itor->second[1];
            }

            ++itor;
        }

        return answer;
    }
};