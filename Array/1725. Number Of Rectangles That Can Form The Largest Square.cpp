class Solution {
public:
    int countGoodRectangles(const std::vector<std::vector<int>>& rectangles)
    {
        std::map<int, int> mapRect;

        int maxLen = 0;

        for(auto rectangle : rectangles)
        {
            int curLen = std::min(rectangle[0], rectangle[1]);

            if(mapRect.end() == mapRect.find(curLen))
            {
                mapRect.insert( { curLen, 1 } );
            }
            else
            {
                ++mapRect[curLen];
            }

            maxLen = std::max(curLen, maxLen);
        }

        return mapRect[maxLen];
    }
};