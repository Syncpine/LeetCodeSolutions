class Solution {
public:
    bool isSubstringPresent(const std::string& s)
    {
        std::set<std::string> set_str;

        int index = s.length() - 1;

        while(index > 0)
        {
            std::string tmp = std::string(1, s[index]) + std::string(1, s[index - 1]);

            set_str.insert(tmp);

            --index;
        }

        const int strLength = s.length();

        index = 0;

        while(index < strLength - 1)
        {
            std::string tmp = s.substr(index, 2);

            if(set_str.end() != set_str.find(tmp))
            {
                return true;
            }

            ++index;
        }

        return false;
    }
};