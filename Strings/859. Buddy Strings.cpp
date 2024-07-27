class Solution {
public:
    bool buddyStrings(const std::string& s, const std::string& goal)
    {
        if(s.length() != goal.length())
        {
            return false;
        }

        std::vector<int> vec;

        std::set<char> mapChar;
        bool hasDuplicate = false;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if(s[index] != goal[index])
            {
                vec.push_back(index);
            }

            if(mapChar.end() != mapChar.find(s[index]))
            {
                hasDuplicate = true;
            }
            
            mapChar.insert(s[index]);

            ++index;
        }

        if(vec.empty() && hasDuplicate)
        {
            return true;
        }

        if(2 != vec.size())
        {
            return false;
        }

        return (s[vec[0]] == goal[vec[1]]) && (s[vec[1]] == goal[vec[0]]);
    }
};