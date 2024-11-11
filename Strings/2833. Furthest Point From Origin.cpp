class Solution {
public:
    int furthestDistanceFromOrigin(const std::string moves)
    {
        return std::max(GoLeft(moves), GoRight(moves));
    }

private:
    int GoLeft(const std::string& moves)
    {
        int count = 0;

        for(auto move : moves)
        {
            if('R' == move)
            {
                --count;
            }
            else
            {
                ++count;
            }
        }

        return count;
    }

    int GoRight(const std::string& moves)
    {
        int count = 0;

        for(auto move : moves)
        {
            if('L' == move)
            {
                --count;
            }
            else
            {
                ++count;
            }
        }

        return count;
    }
};