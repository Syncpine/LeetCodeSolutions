#include <set>
#include <map>

class Solution {
public:
    int uniqueMorseRepresentations(const std::vector<std::string>& words)
    {
        std::set<std::string> passwords;

        for(auto word : words)
        {
            std::string password = "";

            for(auto ch : word)
            {
                password += m_Passwords[ch];
            }

            if(passwords.count(password) == 0)
            {
                passwords.insert(password);
            }
        }

        return passwords.size();
    }

private:
    std::map<char, std::string> m_Passwords = 
    {
        { 'a', ".-", },
        { 'b', "-...", },
        { 'c', "-.-.", },
        { 'd', "-..", },
        { 'e', ".", },
        { 'f', "..-.", },
        { 'g', "--.", },
        { 'h', "....", },
        { 'i', "..", },
        { 'j', ".---", },
        { 'k', "-.-", },
        { 'l', ".-..", },
        { 'm', "--", },
        { 'n', "-.", },
        { 'o', "---", },
        { 'p', ".--.", },
        { 'q', "--.-", },
        { 'r', ".-.", },
        { 's', "...", },
        { 't', "-", },
        { 'u', "..-", },
        { 'v', "...-", },
        { 'w', ".--", },
        { 'x', "-..-", },
        { 'y', "-.--", },
        { 'z', "--..", },
    };
};