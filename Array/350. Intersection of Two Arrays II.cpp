#include <map>

class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
    {
        std::vector<int> retVec;
        std::map<int, Count> set;

        for(auto num : nums1)
        {
            ++(set[num].count1);
        }

        for(auto num : nums2)
        {
            ++(set[num].count2);
        }

        for(auto item : set)
        {
            auto minCount = std::min(item.second.count1, item.second.count2);

            while(minCount--)
            {
                retVec.push_back(item.first);
            }
        }

        return retVec;
    }

private:
    struct Count
    {
        int count1 = 0;
        int count2 = 0;
    };
};