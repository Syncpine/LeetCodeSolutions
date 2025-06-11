class Solution {
public:
    int heightChecker(const std::vector<int>& heights)
    {
        std::vector<int> heights2(heights.begin(), heights.end());

        std::sort(heights2.begin(), heights2.end());

        const int heightsSize = heights.size();

        int index = 0;

        int ans = 0;

        for(index = 0; index < heightsSize; ++index)
        {
            if(heights[index] != heights2[index])
            {
                ++ans;
            }
        }

        return ans;
    }
};