class Solution {
public:
    int findLUSlength(const std::string& a, const std::string& b)
    {
        if(a == b)
        {
            return -1;
        }

        return ((a.length() > b.length()) ? a.length() : b.length());
    }
};