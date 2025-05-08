class Solution {
public:
    int numberOfAlternatingGroups(const std::vector<int>& colors)
    {
        const int colorsSize = colors.size();

        int index = 0;

        int total = 0;

        for(index = 0; index < colorsSize; ++index)
        {
            int left = index - 1;
            int right = index + 1;

            left = left < 0 ? colorsSize - 1 : left;
            right = right >= colorsSize ? 0 : right;

            if(colors[index] != colors[left] && colors[index] != colors[right])
            {
                ++total;
            }
        }

        return total;
    }
};