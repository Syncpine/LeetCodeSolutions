class Solution {
public:
    int minimumMoves(const std::string& s)
    {
        int count = 0;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if('X' == s[index])
            {
                ++count;

                index += 2;
            }

            ++index;
        }

        return count;
    }
};