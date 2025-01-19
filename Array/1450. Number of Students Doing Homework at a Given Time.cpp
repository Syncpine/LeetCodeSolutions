class Solution {
public:
    int busyStudent(const std::vector<int>& startTime, const std::vector<int>& endTime, const int queryTime)
    {
        int count = 0;

        const int startTimeSize = startTime.size();
        int index = 0;

        for(index = 0; index < startTimeSize; ++index)
        {
            if(startTime[index] <= queryTime && queryTime <= endTime[index])
            {
                ++count;
            }
        }

        return count;
    }
};