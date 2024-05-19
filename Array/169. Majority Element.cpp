#include <map>

class Solution {
public:
    int majorityElement(const std::vector<int>& nums)
    {
        std::map<int, int> set;
        auto index = 0;

        for(auto ii : nums)
        {
            ++set[ii];
        }

        for(auto ii : set)
        {
            if(ii.second > set[index])
            {
                index = ii.first;
            }
        }

        return index;
    }
};