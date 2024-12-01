class Solution {
public:
    int countPrefixSuffixPairs(const std::vector<std::string>& words)
    {
        int count = 0;

        const int wordsSize = words.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < wordsSize; ++ii)
        {
            for(jj = ii + 1; jj < wordsSize; ++jj)
            {
                if(IsPrefixSuffixPairs(words[ii], words[jj]))
                {
                    ++count;
                }
            }
        }

        return count;
    }

private:
    bool IsPrefixSuffixPairs(const std::string& str1, const std::string str2)
    {
        if(str1 != str2.substr(0, str1.length()))
        {
            return false;
        }

        if(str1 != str2.substr(str2.length() - str1.length(), str1.length()))
        {
            return false;
        }

        return true;
    }
};