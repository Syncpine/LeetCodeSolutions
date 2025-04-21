class Solution {
public:
    int areaOfMaxDiagonal(const std::vector<std::vector<int>>& dimensions)
    {
        int maxDiagonal = 0;
        int maxArea = 0;

        for(auto dimension : dimensions)
        {
            int diagonal = dimension[0] * dimension[0] + dimension[1] * dimension[1];
            int area = dimension[0] * dimension[1];

            if(diagonal > maxDiagonal)
            {
                maxDiagonal = diagonal;
                maxArea = area;
            }
            else if(diagonal == maxDiagonal)
            {
                maxArea = std::max(area, maxArea);
            }
        }

        return maxArea;
    }
};