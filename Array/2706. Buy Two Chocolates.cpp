class Solution {
public:
    int buyChoco(const std::vector<int>& prices, const int money)
    {
        std::vector<int> vec(2, 0);

        if(prices[0] <= prices[1])
        {
            vec[0] = prices[0];
            vec[1] = prices[1];
        }
        else
        {
            vec[0] = prices[1];
            vec[1] = prices[0];
        }

        const int pricesSize = prices.size();

        int index = 0;

        for(index = 2; index < pricesSize; ++index)
        {
            if(prices[index] < vec[1])
            {
                vec[1] = prices[index];

                if(vec[1] < vec[0])
                {
                    std::swap(vec[0], vec[1]);
                }
            }
        }

        int num = money - (vec[0] + vec[1]);

        return (num >= 0) ? num : money;
    }
};