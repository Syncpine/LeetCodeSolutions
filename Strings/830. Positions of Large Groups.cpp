class Solution {
public:
    std::vector<std::vector<int>> largeGroupPositions(const std::string& s)
    {
        std::vector<std::vector<int>> retVec;

        const int strLength = s.length();
        int index = 0;

        char ch = s[0];
        int count = 0;

        while(index < strLength)
        {
            if(s[index] == ch)
            {
                ++count;
            }
            else
            {
                if(count >= 3)
                {
                    retVec.push_back({ index - count, index - 1 });
                }

                ch = s[index];
                count = 1;
            }

            ++index;
        }

        if(count >= 3)
        {
            retVec.push_back({ index - count, index - 1 });
        }

        return retVec;
    }
};