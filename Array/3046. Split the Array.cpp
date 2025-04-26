class Solution {
public:
    bool isPossibleToSplit(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        for(auto num : nums)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, 1 } );
            }
            else
            {
                ++mapNums[num];
            }

            if(mapNums[num] > 2)
            {
                return false;
            }
        }

        return true;
    }
};