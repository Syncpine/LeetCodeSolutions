class Solution {
public:
    bool isValid(const std::string& word)
    {
        if(word.length() < 3)
        {
            return false;
        }

        bool hasVowel = false;
        bool hasConsonant = false;
        bool hasSpecial = false;

        for(auto ch : word)
        {
            if(m_VowelSet.end() != m_VowelSet.find(ch))
            {
                hasVowel = true;
            }

            if(m_ConsonantSet.end() != m_ConsonantSet.find(ch))
            {
                hasConsonant = true;
            }

            if(m_SpecialSet.end() != m_SpecialSet.find(ch))
            {
                hasSpecial = true;
            }
        }

        return hasVowel && hasConsonant && !hasSpecial;
    }

private:
    const std::set<char> m_VowelSet = 
    {
        'a', 'e', 'i', 'o', 'u',
        'A', 'E', 'I', 'O', 'U',
    };

    const std::set<char> m_ConsonantSet = 
    {
        'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
        'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y',
        'z',
        'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M',
        'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y',
        'Z',
    };

    const std::set<char> m_SpecialSet = 
    {
        '@', '#', '$',
    };
};