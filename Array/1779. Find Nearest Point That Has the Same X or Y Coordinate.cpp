class Solution {
public:
    int nearestValidPoint(const int x, const int y, const std::vector<std::vector<int>>& points)
    {
        const int pointsSize = points.size();
        int index = 0;

        int minIndex = -1;
        int minDistance = 2 * 10000 + 1;

        if(minDistance == 0)
        {
            return 0;
        }

        for(index = 0; index < pointsSize; ++index)
        {
            const std::vector<int>& point = points[index];

            if(x == point[0] || y == point[1])
            {
                int distance = std::abs(x - point[0]) + std::abs(y - point[1]);

                if(minDistance > distance)
                {
                    minDistance = distance;
                    minIndex = index;
                }
            }
        }

        return minIndex;
    }
};