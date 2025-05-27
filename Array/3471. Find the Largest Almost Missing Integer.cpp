#include <map>

class Solution {
public:
    int largestInteger(const std::vector<int>& nums, const int k)
    {
        const int numsSize = nums.size();

        int ii = 0;
        int jj = 0;

        std::map<int, int> mapNums;

        for(ii = 0; ii < numsSize - k + 1; ++ii)
        {
            std::set<int> setNums;

            for(jj = 0; jj < k; ++jj)
            {
                int value = nums[ii + jj];

                if(setNums.end() == setNums.find(value))
                {
                    setNums.insert( value );
                }
            }

            auto itor = setNums.begin();
            while(setNums.end() != itor)
            {
                if(mapNums.end() == mapNums.find(*itor))
                {
                    mapNums.insert( { *itor, 1 } );
                }
                else
                {
                    ++mapNums[*itor];
                }

                ++itor;
            }
        }

        int ans = -1;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second == 1)
            {
                ans = std::max(itor->first, ans);
            }

            ++itor;
        }

        return ans;
    }
};