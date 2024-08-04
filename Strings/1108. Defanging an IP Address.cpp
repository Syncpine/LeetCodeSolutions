class Solution {
public:
    std::string defangIPaddr(const std::string& address)
    {
        std::string retStr = "";

        for(auto ch : address)
        {
            if(ch == '.')
            {
                retStr += "[.]";
            }
            else
            {
                retStr += ch;
            }
        }

        return retStr;
    }
};