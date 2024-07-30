class Solution {
public:
    std::vector<std::string> commonChars(const std::vector<std::string>& words)
    {
        std::vector<std::string> vecStr;

        const int vecSize = words.size();
        int index = 0;

        std::vector<std::vector<int>> vecCount(vecSize, std::vector<int>(26, 0));

        while(index < vecSize)
        {
            for(auto ch : words[index])
            {
                ++vecCount[index][ch - 'a'];
            }

            ++index;
        }

        for(int jj = 0; jj < 26; ++jj)
        {
            int max = words[0].length();

            for(int ii = 0; ii < vecSize; ++ii)
            {
                if(max > vecCount[ii][jj])
                {
                    max = vecCount[ii][jj];
                }
            }

            while(max > 0)
            {
                vecStr.push_back(std::string(1, 'a' + jj));
                --max;
            }
        }

        return vecStr;
    }
};