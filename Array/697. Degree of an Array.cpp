class Solution {
public:
    int findShortestSubArray(const std::vector<int>& nums)
    {
        std::map<int, std::vector<int>> mapNums;

        const int numsSize = nums.size();
        int index = 0;

        while(index < numsSize)
        {
            int num = nums[index];

            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, { 1, index, index } } );
            }
            else
            {
                ++mapNums[num][0];
                mapNums[num][2] = index;
            }

            ++index;
        }

        int maxCount = 0;
        int minLen = numsSize;

        auto itor = mapNums.begin();

        while(mapNums.end() != itor)
        {
            if(itor->second[0] > maxCount)
            {
                maxCount = itor->second[0];
                minLen = itor->second[2] - itor->second[1] + 1;
            }
            else if(itor->second[0] == maxCount)
            {
                int curLen = itor->second[2] - itor->second[1] + 1;
                minLen = (curLen < minLen) ? curLen : minLen;
            }

            ++itor;
        }

        return minLen;
    }
};