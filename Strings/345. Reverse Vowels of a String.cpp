#include <set>

class Solution {
public:
    std::string reverseVowels(std::string& s)
    {
        int index1 = 0;
        int index2 = s.size() - 1;

        while(index1 < index2)
        {
            while(index1 < s.size() && 0 == _SetLetter.count(s[index1]))
            {
                ++index1;
            }

            while(0 <= index2 && 0 == _SetLetter.count(s[index2]))
            {
                --index2;
            }

            if(index1 >= index2)
            {
                return s;
            }

            std::swap(s[index1], s[index2]);

            ++index1;
            --index2;
        }

        return s;
    }

private:
    const static std::set<char> _SetLetter;
};

const std::set<char> Solution::_SetLetter = 
{
    'a', 'e', 'i', 'o', 'u',
    'A', 'E', 'I', 'O', 'U',
};