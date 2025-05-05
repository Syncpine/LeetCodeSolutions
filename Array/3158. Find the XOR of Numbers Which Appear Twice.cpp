class Solution {
public:
    int duplicateNumbersXOR(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        for(auto num : nums)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, 1} );
            }
            else
            {
                ++mapNums[num];
            }
        }

        int ans = 0;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second == 2)
            {
                ans = ans ^ itor->first;
            }

            ++itor;
        }

        return ans;
    }
};