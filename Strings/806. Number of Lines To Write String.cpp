#include <algorithm>

class Solution {
public:
    std::vector<int> numberOfLines(const std::vector<int>& widths, const std::string& s)
    {
        int line = 0;
        int lastWidth = 0;

        for(auto ch : s)
        {
            int index = ch - 'a';
            int width = widths[index];

            if(lastWidth + width > MAX_WIDTH)
            {
                ++line;
                lastWidth = width;
            }
            else
            {
                lastWidth += width;
            }
        }

        if(lastWidth > 0)
        {
            ++line;
        }

        return { line, lastWidth };
    }

private:
    const int MAX_WIDTH = 100;
};