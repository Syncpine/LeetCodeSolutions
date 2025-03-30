class Solution {
public:
    int similarPairs(const std::vector<std::string>& words)
    {
        std::vector<std::string> vecStr;

        for(auto word : words)
        {
            std::set<char> setChar;

            for(auto ch : word)
            {
                if(setChar.end() == setChar.find(ch))
                {
                    setChar.insert(ch);
                }
            }

            std::string str = "";

            for(auto ch : setChar)
            {
                str += ch;
            }

            vecStr.push_back(str);
        }

        const int wordsSize = words.size();

        int ii = 0;
        int jj = 0;

        int total = 0;

        for(ii = 0; ii < wordsSize; ++ii)
        {
            for(jj = ii + 1; jj < wordsSize; ++jj)
            {
                if(vecStr[ii] == vecStr[jj])
                {
                    ++total;
                }
            }
        }

        return total;
    }
};