class Solution {
public:
    int minTimeToType(const std::string& word)
    {
        int count = 0;

        char cur = 'a';

        for(auto ch : word)
        {
            char min_ch = std::min(ch, cur);
            char max_ch = std::max(ch, cur);

            int tmp = std::min(std::abs(max_ch - min_ch), std::abs(min_ch + 26 - max_ch));

            count += tmp + 1;

            cur = ch;
        }

        return count;
    }
};