class Solution {
public:
    int minimumCost(std::vector<int>& cost)
    {
        std::sort(cost.begin(), cost.end());

        int index = cost.size() -1;

        int total = 0;

        while(index >= 0)
        {
            if(index >= 0)
            {
                total += cost[index];
                --index;
            }

            if(index >= 0)
            {
                total += cost[index];
                --index;
            }

            --index;
        }


        return total;
    }
};