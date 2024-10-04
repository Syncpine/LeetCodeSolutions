class Solution {
public:
    int countPoints(const std::string& rings)
    {
        std::vector<std::vector<int>> vec(10, std::vector<int>(3, 0));

        const int strLength = rings.length();
        int index = 0;

        while(index < strLength)
        {
            int pos = (rings[index + 1] - '0');

            if(rings[index] == 'R')
            {
                vec[pos][0] = 1;
            }
            else if(rings[index] == 'G')
            {
                vec[pos][1] = 1;
            }
            else if(rings[index] == 'B')
            {
                vec[pos][2] = 1;
            }

            index += 2;
        }

        int count = 0;
        for(auto item : vec)
        {
            if(item[0] == 1 && item[1] == 1 && item[2] == 1)
            {
                ++count;
            }
        }

        return count;
    }
};