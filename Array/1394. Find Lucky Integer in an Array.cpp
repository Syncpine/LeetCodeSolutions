class Solution {
public:
    int findLucky(const std::vector<int>& arr)
    {
        std::map<int, int> mapArr;

        for(auto num : arr)
        {
            if(mapArr.end() == mapArr.find(num))
            {
                mapArr.insert( { num, 1 } );
            }
            else
            {
                ++mapArr[num];
            }
        }

        auto itor = mapArr.begin();
        while(mapArr.end() != itor)
        {
            if(itor->first == itor->second)
            {
                break;
            }

            ++itor;
        }

        if(mapArr.end() == itor)
        {
            return -1;
        }

        int ret = itor->first;

        while(mapArr.end() != itor)
        {
            if(itor->first == itor->second)
            {
                if(itor->first > ret)
                {
                    ret = itor->first;
                }
            }

            ++itor;
        }

        return ret;
    }
};