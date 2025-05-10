class Solution {
public:
    int winningPlayerCount(const int n, const std::vector<std::vector<int>>& pick)
    {
        std::vector<std::map<int, int>> vecMap(n, std::map<int, int>());

        for(auto vec : pick)
        {
            int player = vec[0];
            int ball = vec[1];

            if(vecMap[player].end() == vecMap[player].find(ball))
            {
                vecMap[player].insert( { ball , 1 } );
            }
            else
            {
                ++vecMap[player][ball];
            }
        }

        const int vecMapSize = vecMap.size();
        int index = 0;

        int count = 0;

        for(index = 0; index < vecMapSize; ++index)
        {
            auto itor = vecMap[index].begin();
            while(vecMap[index].end() != itor)
            {
                if(itor->second > index)
                {
                    ++count;
                    break;
                }
                ++itor;
            }
        }

        return count;
    }
};