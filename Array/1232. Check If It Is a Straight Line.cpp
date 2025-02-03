class Solution {
public:
    bool checkStraightLine(const std::vector<std::vector<int>>& coordinates)
    {
        const std::vector<int> point_a = coordinates[0];
        const std::vector<int> point_b = coordinates[1];

        const int coordinatesSize = coordinates.size();
        int index = 0;

        // 直线与y轴平行 -> 所有点x相等
        if(point_a[0] == point_b[0])
        {
            for(index = 2; index < coordinatesSize; ++index)
            {
                if(point_a[0] != coordinates[index][0])
                {
                    return false;
                }
            }

            return true;
        }

        // 直线与x轴平行 -> 所有点y相等
        if(point_a[1] == point_b[1])
        {
            for(index = 2; index < coordinatesSize; ++index)
            {
                if(point_a[1] != coordinates[index][1])
                {
                    return false;
                }
            }

            return true;
        }

        // 前两个点斜率存在
        for(index = 2; index < coordinatesSize; ++index)
        {
            const auto point = coordinates[index];

            if(point[0] - point_a[0] == 0)
            {
                return false;
            }

            if((point[1] - point_a[1]) * (point_b[0] - point_a[0])
                != (point_b[1] - point_a[1]) * (point[0] - point_a[0]))
            {
                return false;
            }
        }

        return true;
    }
};