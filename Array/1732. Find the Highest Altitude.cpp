class Solution {
public:
    int largestAltitude(std::vector<int>& gain)
    {
        const int gainSize = gain.size();
        int index = 0;

        int maxAltitude = 0;
        maxAltitude = std::max(gain[0], maxAltitude);

        for(index = 1; index < gainSize; ++index)
        {
            gain[index] = gain[index - 1] + gain[index];
            maxAltitude = std::max(gain[index], maxAltitude);
        }

        return maxAltitude;
    }
};