class Solution {
public:
    int scoreOfString(const std::string& s)
    {
        unsigned long score = 0;

        const int strLength = s.length();
        int index = 1;

        while(index < strLength)
        {
            score += std::abs(s[index] - s[index - 1]);
            ++index;
        }

        return (int)score;
    }
};