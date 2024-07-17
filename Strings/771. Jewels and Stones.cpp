class Solution {
public:
    int numJewelsInStones(const std::string& jewels, const std::string& stones)
    {
        int ret = 0;

        std::set<char> stoneTypes;

        for(auto ch : jewels)
        {
            char stonrType = ch;
            stoneTypes.insert(stonrType);
        }

        for(auto stone : stones)
        {
            if(stoneTypes.count(stone) > 0)
            {
                ++ret;
            }
        }

        return ret;
    }
};