class Solution {
public:
    int vowelStrings(const std::vector<std::string>& words, const int& left, const int& right)
    {
        int count = 0;

        for(int index = left; index <= right; ++index)
        {
            if((set_ch.end() != set_ch.find(words[index][0]))
                && (set_ch.end() != set_ch.find(words[index].back())))
            {
                ++count;
            }
        }

        return count;
    }

private:
    const set<char> set_ch = { 'a', 'e', 'i', 'o', 'u' };
};