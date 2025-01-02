class Solution {
public:
    int findPoisonedDuration(const std::vector<int>& timeSeries, const int duration)
    {
        int total = 0;
        int cur = 0;

        for(auto item : timeSeries)
        {
            if(item < cur)
            {
                total = total - (cur - item);
            }

            total += duration;

            cur = item + duration;
        }

        return total;
    }
};