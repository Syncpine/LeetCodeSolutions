class Solution {
public:
    int numberOfSpecialChars(const std::string& word)
    {
        std::vector<std::vector<int>> vec(26, std::vector<int>(2, 0));

        for(auto ch : word)
        {
            if(std::islower(ch))
            {
                vec[ch - 'a'][0] = 1;
            }
            else
            {
                vec[ch - 'A'][1] = 1;
            }
        }

        int count = 0;

        for(auto item : vec)
        {
            if(item[0] == 1 && item[1] == 1)
            {
                ++count;
            }
        }

        return count;
    }
};