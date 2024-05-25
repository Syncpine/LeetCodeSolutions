#include <map>

class Solution {
public:
    std::vector<std::string> findWords(const std::vector<std::string>& words)
    {
        std::vector<std::string> retVec;

        for(auto word : words)
        {
            const auto wordLength = word.length();
            const auto sign0 = Keyboard[std::toupper(word[0])];
            bool isInsert = true;

            for(auto index = 1; index < wordLength; ++index)
            {
                const auto signIndex = Keyboard[std::toupper(word[index])];

                if(sign0 != signIndex)
                {
                    isInsert = false;
                    break;
                }
            }

            if(isInsert)
            {
                retVec.push_back(word);
            }
        }

        return retVec;
    }

private:
    static std::map<char, int> Keyboard;
};

std::map<char, int> Solution::Keyboard = 
{
    {'Q', 1},
    {'W', 1},
    {'E', 1},
    {'R', 1},
    {'T', 1},
    {'Y', 1},
    {'U', 1},
    {'I', 1},
    {'O', 1},
    {'P', 1},

    {'A', 2},
    {'S', 2},
    {'D', 2},
    {'F', 2},
    {'G', 2},
    {'H', 2},
    {'J', 2},
    {'K', 2},
    {'L', 2},

    {'Z', 3},
    {'X', 3},
    {'C', 3},
    {'V', 3},
    {'B', 3},
    {'N', 3},
    {'M', 3},
};