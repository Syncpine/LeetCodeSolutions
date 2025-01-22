#include <set>

class Solution {
public:
    std::vector<std::string> stringMatching(std::vector<std::string>& words)
    {
        std::set<std::string> setWords;

        const int wordsSize = words.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < wordsSize; ++ii)
        {
            for(jj = 0; jj < wordsSize; ++jj)
            {
                if(ii == jj)
                {
                    continue;
                }

                if(std::string::npos != words[ii].find(words[jj]))
                {
                    setWords.insert(words[jj]);
                }
            }
        }

        std::vector<std::string> retVec;

        auto itor = setWords.begin();
        while(setWords.end() != itor)
        {
            retVec.push_back(*itor);
            ++itor;
        }

        return retVec;
    }
};