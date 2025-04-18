class Solution {
public:
    int numberOfPoints(const std::vector<std::vector<int>>& nums)
    {
        std::vector<int> coordinates(101, 0);

        for(auto vec : nums)
        {
            int pos = vec[0];

            while(pos <= vec[1])
            {
                coordinates[pos] = 1;
                ++pos;
            }
        }

        int total = 0;

        for(auto coordinate : coordinates)
        {
            total += coordinate;
        }

        return total;
    }
};