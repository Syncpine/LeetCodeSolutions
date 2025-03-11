class Solution {
public:
    int maxDistance(const std::vector<int>& colors)
    {
        const int colorsSize = colors.size();

        int leftPos = 0;
        int rightPos = colorsSize - 1;

        int leftDist = 0;
        int rightDist = 0;

        while(leftPos < rightPos)
        {
            if(colors[leftPos] != colors[rightPos])
            {
                leftDist = rightPos - leftPos;
                break;
            }

            ++leftPos;
        }

        leftPos = 0;

        while(leftPos < rightPos)
        {
            if(colors[leftPos] != colors[rightPos])
            {
                rightDist = rightPos - leftPos;
                break;
            }

            --rightPos;
        }

        return std::max(leftDist, rightDist);
    }
};