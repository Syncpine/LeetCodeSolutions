class Solution {
public:
    bool checkIfPangram(const std::string& sentence)
    {
        std::vector<char> vec(26, 0);

        for(auto ch : sentence)
        {
            vec[ch - 'a'] = 1;
        }

        for(auto item : vec)
        {
            if(item == 0)
            {
                return false;
            }
        }

        return true;
    }
};