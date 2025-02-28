class Solution {
public:
    int maximumPopulation(const std::vector<std::vector<int>>& logs)
    {
        std::map<int, int> mapLogs;

        const int logsSize = logs.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < logsSize; ++ii)
        {
            for(jj = logs[ii][0]; jj < logs[ii][1]; ++jj)
            {
                if(mapLogs.end() == mapLogs.find(jj))
                {
                    mapLogs.insert( { jj , 1 } );
                }
                else
                {
                    ++mapLogs[jj];
                }
            }
        }

        int maxPopulation = mapLogs.begin()->first;

        auto itor = mapLogs.begin();
        while(mapLogs.end() != itor)
        {
            if(itor->second > mapLogs[maxPopulation])
            {
                maxPopulation = itor->first;
            }

            ++itor;
        }

        return maxPopulation;
    }
};