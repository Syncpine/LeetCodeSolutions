class Solution {
public:
    std::vector<int> finalPrices(std::vector<int>& prices)
    {
        const int pricesSize = prices.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < pricesSize; ++ii)
        {
            for(jj = ii + 1; jj < pricesSize; ++jj)
            {
                if(prices[ii] >= prices[jj])
                {
                    break;
                }
            }

            if(pricesSize != jj)
            {
                prices[ii] -= prices[jj];
            }
        }

        return prices;
    }
};