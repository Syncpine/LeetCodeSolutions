class Solution {
public:
    std::string bestHand(const std::vector<int>& ranks, const std::vector<char>& suits)
    {
        bool isSameSuit = true;

        for(auto suit : suits)
        {
            if(suit != suits[0])
            {
                isSameSuit = false;
            }
        }

        if(isSameSuit)
        {
            return "Flush";
        }

        std::map<int, int> mapRanks;

        for(auto rank : ranks)
        {
            if(mapRanks.end() == mapRanks.find(rank))
            {
                mapRanks.insert( { rank, 1 } );
            }
            else
            {
                ++mapRanks[rank];
            }
        }

        int maxCount = 0;

        auto itor = mapRanks.begin();
        while(mapRanks.end() != itor)
        {
            maxCount = std::max(itor->second, maxCount);

            ++itor;
        }

        if(maxCount >= 3)
        {
            return "Three of a Kind";
        }
        else if(maxCount == 2)
        {
            return "Pair";
        }

        return "High Card";
    }
};