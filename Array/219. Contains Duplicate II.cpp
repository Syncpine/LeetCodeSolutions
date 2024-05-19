#include <map>

class Solution {
public:
    bool containsNearbyDuplicate(const std::vector<int>& nums, const int& k)
    {
        std::map<int, std::vector<int>> set;
        const auto vecSize = nums.size();

        for(int ii = 0; ii < vecSize; ++ii)
        {
            const auto num = nums[ii];
            set[num].push_back(ii);

            if(2 <= set[num].size())
            {
                const auto indexCount = set[num].size();

                if(k >= (set[num][indexCount - 1] - set[num][indexCount - 2]))
                {
                    return true;
                }
            }
        }

        return false;
    }
};