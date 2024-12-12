class Solution {
public:
    bool repeatedSubstringPattern(const std::string& s)
    {
        const int sLength = s.length();
        int index = 0;

        std::string start = "";

        for(index = 1; index < sLength; ++index)
        {
            std::string start = s.substr(0, index);

            int pos = 0;

            while(pos < sLength)
            {
                if(start != s.substr(pos, start.length()))
                {
                    break;
                }

                pos += start.length();
            }

            if(pos == sLength)
            {
                return true;
            }
        }

        return false;
    }
};