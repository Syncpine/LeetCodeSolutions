class Solution {
public:
    std::vector<int> circularGameLosers(const int n, const int k)
    {
        std::vector<int> player(n, 0);

        int pos = 0;
        int cc = 0;

        while(true)
        {
            ++player[pos];

            if(player[pos] >= 2)
            {
                break;
            }

            ++cc;
            pos = (pos + k * cc) % n;
        }

        std::vector<int> ans;

        int index = 0;

        for(index = 0; index < n; ++index)
        {
            if(player[index] == 0)
            {
                ans.push_back(index + 1);
            }
        }

        return ans;
    }
};