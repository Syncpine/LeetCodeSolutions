class Solution {
public:
    char repeatedCharacter(const std::string& s)
    {
        std::set<char> set;

        for(auto ch : s)
        {
            if(set.end() != set.find(ch))
            {
                return ch;
            }

            set.insert(ch);
        }

        return '\0';
    }
};