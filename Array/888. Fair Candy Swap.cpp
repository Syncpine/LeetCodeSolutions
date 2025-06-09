class Solution {
public:
    std::vector<int> fairCandySwap(const std::vector<int>& aliceSizes, const std::vector<int>& bobSizes)
    {
        int diff = 0;

        for(auto num : aliceSizes)
        {
            diff += num;
        }

        for(auto num : bobSizes)
        {
            diff -= num;
        }

        for(auto num : aliceSizes)
        {
            for(auto num2 : bobSizes)
            {
                if(diff == (num - num2) * 2)
                {
                    return { num, num2 };
                }
            }
        }

        return { };
    }
};