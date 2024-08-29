class Solution {
public:
    bool halvesAreAlike(const std::string& s)
    {
        const int strLength = s.length();

        int index = 0;

        int count = 0;

        while(index < strLength / 2)
        {
            if(m_chSet.end() != m_chSet.find(s[index]))
            {
                ++count;
            }

            ++index;
        }

        while(index < strLength)
        {
            if(m_chSet.end() != m_chSet.find(s[index]))
            {
                --count;
            }

            ++index;
        }

        return count == 0;
    }

private:
    const std::set<char> m_chSet = { 'a','e','i','o','u','A','E','I','O','U' };
};