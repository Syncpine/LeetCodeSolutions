class Solution {
public:
    int minimizedStringLength(const std::string& s)
    {
        std::set<char> setChars;

        for(auto ch : s)
        {
            if(setChars.end() == setChars.find(ch))
            {
                setChars.insert(ch);
            }
        }

        return setChars.size();
    }
};