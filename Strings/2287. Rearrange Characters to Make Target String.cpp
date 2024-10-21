class Solution {
public:
    int rearrangeCharacters(const std::string& s, const std::string& target)
    {
        std::vector<std::vector<int>> vec(26, std::vector<int>(2, 0));

        for(auto ch : s)
        {
            ++vec[ch - 'a'][0];
        }

        for(auto ch : target)
        {
            ++vec[ch -  'a'][1];
        }

        int cur_min = s.length() / target.length();

        for(auto item : vec)
        {
            if(item[1] != 0)
            {
                int tmp = item[0] / item[1];

                cur_min = (tmp < cur_min) ? tmp : cur_min;
            }
        }

        return cur_min;
    }
};