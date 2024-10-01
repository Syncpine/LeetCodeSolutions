class Solution {
public:
    bool checkAlmostEquivalent(const std::string& word1, const std::string& word2)
    {
        std::vector<int> vec(26, 0);

        for(auto ch : word1)
        {
            ++vec[ch - 'a'];
        }

        for(auto ch : word2)
        {
            --vec[ch - 'a'];
        }

        for(auto num : vec)
        {
            if(std::abs(num) > 3)
            {
                return false;
            }
        }

        return true;
    }
};