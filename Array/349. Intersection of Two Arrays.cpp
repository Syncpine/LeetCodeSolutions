#include <set>

class Solution {
public:
    std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        std::set<int> set1, set2;
        std::vector<int> retVec;

        for(auto num : nums1)
        {
            set1.insert(num);
        }

        for(auto num : nums2)
        {
            if(set1.count(num))
            {
                set2.insert(num);
            }
        }

        for(auto num : set2)
        {
            retVec.push_back(num);
        }

        return retVec;
    }
};