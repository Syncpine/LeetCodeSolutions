class Solution {
public:
    int percentageLetter(const std::string& s, const char& letter)
    {
        int count = 0;

        for(auto ch : s)
        {
            if(letter == ch)
            {
                ++count;
            }
        }

        return 100 * count / s.length();
    }
};