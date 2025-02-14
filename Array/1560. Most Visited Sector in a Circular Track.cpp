class Solution {
public:
    std::vector<int> mostVisited(const int n, const std::vector<int>& rounds)
    {
        int start = rounds[0];
        int end = rounds[rounds.size() - 1];

        std::vector<int> maxVisited;

        if(start <= end)
        {
            for(int index = start; index <= end; ++index)
            {
                maxVisited.push_back(index);
            }
        }
        else
        {
            for(int index = 1; index <= end; ++index)
            {
                maxVisited.push_back(index);
            }

            for(int index = start; index <= n; ++index)
            {
                maxVisited.push_back(index);
            }
        }

        return maxVisited;
    }
};