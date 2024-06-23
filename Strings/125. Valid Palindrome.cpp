class Solution {
public:
    bool isPalindrome(const std::string& s)
    {
        int index1 = 0;
        int index2 = s.length() - 1;

        while(index1 < index2)
        {
            while(index1 < index2)
            {
                if(('A' <= std::toupper(s[index1]) && std::toupper(s[index1]) <= 'Z')
                    || std::isdigit(s[index1]))
                {
                    break;
                }

                ++index1;
            }

            while(index1 < index2)
            {
                if(('A' <= std::toupper(s[index2]) && std::toupper(s[index2]) <= 'Z')
                    || std::isdigit(s[index2]))
                {
                    break;
                }

                --index2;
            }

            if(std::toupper(s[index1]) != std::toupper(s[index2]))
            {
                return false;
            }

            ++index1;
            --index2;
        }

        return true;
    }
};