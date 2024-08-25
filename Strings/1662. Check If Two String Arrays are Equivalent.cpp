class Solution {
public:
    bool arrayStringsAreEqual(const std::vector<std::string>& word1, const std::vector<std::string>& word2)
    {
        int ii = 0;
        int jj = 0;

        for(auto str1 : word1)
        {
            for(auto ch1 : str1)
            {
                std::cout << ch1 << " " << ii << " " << jj << std::endl;

                if(jj >= word2[ii].length())
                {
                    ++ii;
                    jj = 0;
                }
                
                std::cout << ch1 << " " << ii << " " << jj << std::endl;

                if(ii >= word2.size())
                {
                    return false;
                }

                std::cout << ch1 << " " << ii << " " << jj << std::endl;

                if(ch1 != word2[ii][jj])
                {
                    return false;
                }

                ++jj;

                std::cout << ch1 << " " << ii << " " << jj << std::endl << std::endl;
            }
        }

        if(ii == word2.size() - 1 && jj == word2[ii].length())
        {
            return true;
        }

        return false;
    }
};