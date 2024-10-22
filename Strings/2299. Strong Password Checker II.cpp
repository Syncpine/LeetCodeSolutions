class Solution {
public:
    bool strongPasswordCheckerII(const std::string& password)
    {
        if(password.length() < 8)
        {
            return false;
        }

        bool hasLowerLetter = false;
        bool hasUpperLetter = false;

        bool hasDigit = false;

        bool hasSpecialLetter = false;
        std::set<char> set_ch = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+' };

        char preLetter = password[1];

        for(auto ch : password)
        {
            if(preLetter == ch)
            {
                return false;
            }

            preLetter = ch;

            if('a' <= ch && ch <= 'z')
            {
                hasLowerLetter = true;
                continue;
            }

            if('A' <= ch && ch <= 'Z')
            {
                hasUpperLetter = true;
                continue;
            }

            if('0' <= ch && ch <= '9')
            {
                hasDigit = true;
                continue;
            }

            if(set_ch.end() != set_ch.find(ch))
            {
                hasSpecialLetter = true;
                continue;
            }

            return false;
        }

        return hasLowerLetter && hasUpperLetter && hasDigit && hasSpecialLetter;
    }
};