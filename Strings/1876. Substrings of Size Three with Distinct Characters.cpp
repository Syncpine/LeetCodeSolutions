class Solution {
public:
    int countGoodSubstrings(const std::string& s)
    {
        int count = 0;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength - 2)
        {
            std::string tmp = s.substr(index, 3);

            if(tmp[0] != tmp[1] && tmp[0] != tmp[2] && tmp[1] != tmp[2])
            {
                ++count;
            }

            ++index;
        }

        return count;
    }
};