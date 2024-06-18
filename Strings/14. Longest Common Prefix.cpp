class Solution {
public:
    std::string longestCommonPrefix(const std::vector<std::string>& strs)
    {
        const auto vecSize = strs.size();

        int ii = 0, jj = 0;

        for(jj = 0; jj < strs[0].length(); ++jj)
        {
            for(ii = 0; ii < vecSize; ++ii)
            {
                if(strs[ii].length() <= jj)
                {
                    return strs[0].substr(0, jj);
                }

                if(strs[0][jj] != strs[ii][jj])
                {
                    return strs[0].substr(0, jj);
                }
            }
        }

        return strs[0];
    }
};