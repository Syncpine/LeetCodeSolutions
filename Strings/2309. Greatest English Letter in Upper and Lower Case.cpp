class Solution {
public:
    std::string greatestLetter(const std::string& s)
    {
        std::vector<std::vector<int>> vec_ch(26, std::vector<int>(2, 0));

        for(auto ch : s)
        {
            if('a' <= ch && ch <= 'z')
            {
                vec_ch[ch - 'A' - 32][0] = 1;
            }

            if('A' <= ch && ch <= 'Z')
            {
                vec_ch[ch - 'A'][1] = 1;
            }
        }

        int index = 25;

        while(index >= 0)
        {
            if(vec_ch[index][0] == 1 && vec_ch[index][1] == 1)
            {
                std::string str(1, 'A' + index);
                return str;
            }

            --index;
        }

        return "";
    }
};