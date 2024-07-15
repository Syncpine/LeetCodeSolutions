class Solution {
public:
    std::string toLowerCase(const std::string& s)
    {
        std::string ret = "";

        for(auto ch : s)
        {
            ret += std::tolower(ch);
        }

        return ret;
    }
};