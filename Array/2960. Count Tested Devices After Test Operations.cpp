class Solution {
public:
    int countTestedDevices(std::vector<int>& batteryPercentages)
    {
        const int n = batteryPercentages.size();

        int ii = 0;
        int jj = 0;

        int count = 0;

        for(ii = 0; ii < n; ++ii)
        {
            if(batteryPercentages[ii] > 0)
            {
                ++count;

                for(jj = ii + 1; jj < n; ++jj)
                {
                    batteryPercentages[jj] = std::max(batteryPercentages[jj] - 1, 0);
                }
            }
        }

        return count;
    }
};