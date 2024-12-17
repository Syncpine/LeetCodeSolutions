class Solution {
public:
    bool canPlaceFlowers(const std::vector<int>& flowerbed, int n)
    {
        int count = 1;

        for(auto item : flowerbed)
        {
            if(item == 1)
            {
                if(count != 0)
                {
                    n = n - (count - 1) / 2;
                    count = 0;
                }
            }
            else
            {
                ++count;
            }
        }

        ++count;

        if(count != 0)
        {
            n = n - (count - 1) / 2;
        }

        return n <= 0;
    }
};