class Solution {
public:
    int buttonWithLongestTime(const std::vector<std::vector<int>>& events)
    {
        int ans = 0;
        int maxTime = 0;

        int lastTime = 0;

        for(auto event : events)
        {
            int curTime = event[1] - lastTime;

            if(curTime > maxTime)
            {
                ans = event[0];
                maxTime = curTime;
            }
            else if(curTime == maxTime)
            {
                ans = std::min(event[0], ans);
            }

            lastTime = event[1];
        }

        return ans;
    }
};