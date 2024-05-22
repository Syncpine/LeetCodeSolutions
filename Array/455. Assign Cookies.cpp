#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s)
    {
        auto count = 0;
        const auto gSize = g.size();
        const auto sSize = s.size();
        auto index1 = 0, index2 = 0;

        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        while(index1 < gSize)
        {
            while(index2 < sSize)
            {
                if(g[index1] <= s[index2])
                {
                    ++index2;
                    ++count;
                    break;
                }

                ++index2;
            }

            ++index1;
        }

        return count;
    }
};