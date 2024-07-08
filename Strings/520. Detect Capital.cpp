class Solution {
public:
    bool detectCapitalUse(std::string word)
    {
        if(islower(word[0]))
        {
            for(auto ch : word)
            {
                if(isupper(ch))
                {
                    return false;
                }
            }

            return true;
        }

        const int strLength = word.length();

        if(strLength > 2)
        {
            if(isupper(word[1]))
            {
                for(auto ch : word)
                {
                    if(islower(ch))
                    {
                        return false;
                    }
                }

                return true;
            }

            for(auto index = 1; index < strLength; ++index)
            {
                if(isupper(word[index]))
                {
                    return false;
                }
            }

            return true;
        }

        return true;
    }
};