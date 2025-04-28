class Solution {
public:
    int minimumBoxes(const std::vector<int>& apple, std::vector<int>& capacity)
    {
        std::sort(capacity.begin(), capacity.end());

        int total = 0;

        for(auto num : apple)
        {
            total += num;
        }

        int index = capacity.size() - 1;

        while(index >= 0)
        {
            if(total <= 0)
            {
                return capacity.size() - index - 1;
            }

            total -= capacity[index];
            --index;
        }

        return capacity.size();
    }
};