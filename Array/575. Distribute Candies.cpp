class Solution {
public:
    int distributeCandies(const std::vector<int>& candyType)
    {
        std::map<int, int> mapCandyType;

        for(auto item : candyType)
        {
            if(mapCandyType.end() == mapCandyType.find(item))
            {
                mapCandyType.insert( { item, 1 } );
            }
            else
            {
                ++mapCandyType[item];
            }
        }

        const int n_2 = candyType.size() / 2;

        return (mapCandyType.size() >= n_2) ? n_2 : mapCandyType.size();
    }
};