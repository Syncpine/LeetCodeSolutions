class Solution {
public:
    std::vector<std::vector<int>> mergeSimilarItems(const std::vector<std::vector<int>>& items1, const std::vector<std::vector<int>>& items2)
    {
        std::map<int, int> mapItems;

        for(auto items : items1)
        {
            if(mapItems.end() == mapItems.find(items[0]))
            {
                mapItems.insert( { items[0], items[1] } );
            }
            else
            {
                mapItems[items[0]] += items[1];
            }
        }

        for(auto items : items2)
        {
            if(mapItems.end() == mapItems.find(items[0]))
            {
                mapItems.insert( { items[0], items[1] } );
            }
            else
            {
                mapItems[items[0]] += items[1];
            }
        }

        std::vector<std::vector<int>> items;

        auto itor = mapItems.begin();
        while(mapItems.end() != itor)
        {
            items.push_back( { itor->first, itor->second } );

            ++itor;
        }

        return items;
    }
};