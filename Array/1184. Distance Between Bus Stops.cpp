class Solution {
public:
    int distanceBetweenBusStops(const std::vector<int>& distance, const int start, const int destination)
    {
        if(start == destination)
        {
            return 0;
        }

        const int distanceSize = distance.size();

        int pos = start;
        int len1 = 0;

        while(pos != destination)
        {
            len1 += distance[pos];

            ++pos;

            pos = (pos == distanceSize) ? 0 : pos;
        }

        pos = destination;
        int len2 = 0;

        while(pos != start)
        {
            len2 += distance[pos];

            ++pos;

            pos = (pos == distanceSize) ? 0 : pos;
        }

        return std::min(len1, len2);
    }
};