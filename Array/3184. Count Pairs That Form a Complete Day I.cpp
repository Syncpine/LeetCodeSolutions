class Solution {
public:
    int countCompleteDayPairs(const std::vector<int>& hours)
    {
        int ans = 0;

        const int hoursSize = hours.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < hoursSize; ++ii)
        {
            for(jj = ii + 1; jj < hoursSize; ++jj)
            {
                if((hours[ii] + hours[jj]) % 24 == 0)
                {
                    ++ans;
                }
            }
        }

        return ans;
    }
};