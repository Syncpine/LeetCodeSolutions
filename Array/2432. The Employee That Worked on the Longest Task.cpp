class Solution {
public:
    int hardestWorker(const int n, const std::vector<std::vector<int>>& logs)
    {
        const int logsSize = logs.size();

        int index = 0;

        int longestTimeId = logs[0][0];
        int longestTime = logs[0][1] - 0;

        for(index = 1; index < logsSize; ++index)
        {
            int time = logs[index][1] - logs[index - 1][1];

            if(time > longestTime)
            {
                longestTimeId = logs[index][0];
                longestTime = time;
            }
            else if(time == longestTime)
            {
                longestTimeId = std::min(logs[index][0], longestTimeId);
            }
        }

        return longestTimeId;
    }
};