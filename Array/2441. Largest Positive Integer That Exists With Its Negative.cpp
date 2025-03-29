class Solution {
public:
    int findMaxK(const std::vector<int>& nums)
    {
        std::map<int, std::vector<int>> mapNums;

        for(auto num : nums)
        {
            int absNum = std::abs(num);

            if(mapNums.end() == mapNums.find(absNum))
            {
                if(num > 0)
                {
                    mapNums.insert( { absNum, { 1, 0 } } );
                }
                else
                {
                    mapNums.insert( { absNum, { 0, 1} } );
                }
            }
            else
            {
                if(num > 0)
                {
                    mapNums[absNum][0] = 1;
                }
                else
                {
                    mapNums[absNum][1] = 1;
                }
            }
        }

        int maxNum = -1;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[0] == 1 && itor->second[1] == 1)
            {
                maxNum = std::max(itor->first, maxNum);
            }

            ++itor;
        }

        return maxNum;
    }
};