class Solution {
public:
    std::string restoreString(const std::string& s, const std::vector<int>& indices)
    {
        std::string str(s.length(), ' ');

        int index = 0;

        for(auto indice : indices)
        {
            str[indice] = s[index];
            ++index;
        }

        return str;
    }
};