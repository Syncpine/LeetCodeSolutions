class Solution {
public:
    char findTheDifference(const std::string& s, const std::string& t)
    {
        std::vector<char> vec_ch(26, 0);

        int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            ++vec_ch[s[index] - 'a'];
            --vec_ch[t[index] - 'a'];

            ++index;
        }

        --vec_ch[t[index] - 'a'];

        for(index = 0; index < 26; ++index)
        {
            if(-1 == vec_ch[index])
            {
                return index + 'a';
            }
        }

        return '\0';
    }
};