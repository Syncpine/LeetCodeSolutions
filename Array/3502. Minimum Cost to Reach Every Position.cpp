class Solution {
public:
    std::vector<int> minCosts(const std::vector<int>& cost)
    {
        const int n = cost.size();
        int index = 0;

        std::vector<int> answer(n, 0);

        answer[0] = cost[0];

        for(index = 1; index < n; ++index)
        {
            answer[index] = std::min(answer[index - 1], cost[index]);
        }

        return answer;
    }
};