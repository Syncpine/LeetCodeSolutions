class Solution {
public:
    long long pickGifts(std::vector<int>& gifts, int k)
    {
        const int giftsSize = gifts.size();

        int index = 0;
        int minIndex = 0;

        while(k--)
        {
            minIndex = 0;

            for(index = 0; index < giftsSize; ++index)
            {
                if(gifts[index] > gifts[minIndex])
                {
                    minIndex = index;
                }
            }

            gifts[minIndex] = std::sqrt(gifts[minIndex]);
        }

        long long total = 0;

        for(auto gift : gifts)
        {
            total += gift;
        }

        return total;
    }
};