class Solution {
public:
    int minTimeToVisitAllPoints(const std::vector<std::vector<int>>& points)
    {
        int total = 0;

        const int pointsSize = points.size();
        int index = 0;

        for(index = 1; index < pointsSize; ++index)
        {
            int point_1_x = points[index - 1][0];
            int point_1_y = points[index - 1][1];

            int point_2_x = points[index][0];
            int point_2_y = points[index][1];

            int cc_x = std::abs(point_2_x - point_1_x);
            int cc_y = std::abs(point_2_y - point_1_y);

            total += std::min(cc_x, cc_y);
            total += std::abs(cc_x - cc_y);
        }

        return total;
    }
};