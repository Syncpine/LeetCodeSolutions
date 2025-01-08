class Solution {
public:
    bool uniqueOccurrences(const std::vector<int>& arr)
    {
        std::map<int, int> mapArr;

        for(auto item : arr)
        {
            if(mapArr.end() == mapArr.find(item))
            {
                mapArr.insert( { item, 1} );
            }
            else
            {
                ++mapArr[item];
            }
        }

        std::set<int> setCount;

        auto itor = mapArr.begin();

        while(mapArr.end() != itor)
        {
            if(setCount.end() != setCount.find(itor->second))
            {
                return false;
            }

            setCount.insert(itor->second);

            ++itor;
        }

        return true;
    }
};