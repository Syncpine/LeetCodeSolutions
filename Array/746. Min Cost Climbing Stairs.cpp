class Solution {
public:
    int minCostClimbingStairs(const std::vector<int>& cost)
    {
        int costSize = cost.size();

        int index = 0;

        int prev = 0;
        int curr = 0;

        for (index = 2; index <= costSize; ++index)
        {
            int next = std::min(curr + cost[index - 1], prev + cost[index - 2]);
            prev = curr;
            curr = next;
        }

        return curr;
    }
};