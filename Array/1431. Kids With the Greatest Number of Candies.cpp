class Solution {
public:
    std::vector<bool> kidsWithCandies(const std::vector<int>& candies, const int extraCandies)
    {
        int maxCandies = 0;

        for(auto candie : candies)
        {
            if(candie > maxCandies)
            {
                maxCandies = candie;
            }
        }

        const int candiesSize = candies.size();
        int index = 0;

        std::vector<bool> retVec(candiesSize, false);

        for(index = 0; index < candiesSize; ++index)
        {
            if(candies[index] + extraCandies >= maxCandies)
            {
                retVec[index] = true;
            }
        }

        return retVec;
    }
};