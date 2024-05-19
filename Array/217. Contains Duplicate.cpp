#include <map>

class Solution {
public:
    bool containsDuplicate(const std::vector<int>& nums)
    {
        std::map<int, int> set;

        for(auto ii : nums)
        {
            ++set[ii];
            if(2 <= set[ii])
            {
                return true;
            }
        }

        return false;
    }
};