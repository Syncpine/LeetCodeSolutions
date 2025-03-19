class Solution {
public:
    bool divideArray(const std::vector<int>& nums)
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
        }

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second % 2 != 0)
            {
                return false;
            }

            ++itor;
        }

        return true;
    }
};