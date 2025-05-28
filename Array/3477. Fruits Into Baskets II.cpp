class Solution {
public:
    int numOfUnplacedFruits(const std::vector<int>& fruits, std::vector<int>& baskets)
    {
        const int n = fruits.size();

        int ii = 0;
        int jj = 0;

        int ans = 0;

        for(ii = 0; ii < n; ++ii)
        {
            for(jj = 0; jj < n; ++jj)
            {
                if(baskets[jj] >= fruits[ii])
                {
                    baskets[jj] = 0;
                    break;
                }
            }

            if(n == jj)
            {
                ++ans;
            }
        }

        return ans;
    }
};