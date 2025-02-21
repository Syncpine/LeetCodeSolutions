class Solution {
public:
    int maximumWealth(const std::vector<std::vector<int>>& accounts)
    {
        int maxWealth = 0;

        for(auto account : accounts)
        {
            int tmpWealth = 0;

            for(auto wealth : account)
            {
                tmpWealth += wealth;
            }

            maxWealth = (tmpWealth > maxWealth) ? tmpWealth : maxWealth;
        }

        return maxWealth;
    }
};