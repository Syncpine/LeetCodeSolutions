class Solution {
public:
    char nextGreatestLetter(const std::vector<char>& letters, const char target)
    {
        for(auto letter : letters)
        {
            if(target < letter)
            {
                return letter;
            }
        }

        return letters[0];
    }
};