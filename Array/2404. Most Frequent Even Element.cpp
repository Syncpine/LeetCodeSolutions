class Solution {
public:
    int mostFrequentEven(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        for(auto num : nums)
        {
            if(num % 2 == 0)
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
        }

        if(mapNums.size() == 0)
        {
            return -1;
        }

        auto retItor = mapNums.begin();

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second > retItor->second)
            {
                retItor = itor;
            }
            else if(itor->second == retItor->second)
            {
                if(retItor->first > itor->first)
                {
                    retItor = itor;
                }
            }

            ++itor;
        }

        return retItor->first;
    }
};