class Solution {
public:
    char slowestKey(const std::vector<int>& releaseTimes, const std::string& keysPressed)
    {
        char ret = keysPressed[0];
        int curMax = releaseTimes[0];

        const int vecSize = releaseTimes.size();

        int index = 0;

        for(index = 1; index < vecSize; ++index)
        {
            int tmp = releaseTimes[index] - releaseTimes[index - 1];

            if(tmp > curMax)
            {
                curMax = tmp;
                ret = keysPressed[index];
            }
            else if(tmp == curMax)
            {
                if(keysPressed[index] > ret)
                {
                    ret = keysPressed[index];
                }
            }
        }

        return ret;
    }
};