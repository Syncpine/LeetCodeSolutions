class Solution {
public:
    std::string oddString(const std::vector<std::string>& words)
    {
        const int wordsSize = words.size();

        const int n = words[0].length();

        int ii = 0;
        int jj = 0;

        std::map<std::vector<int>, std::vector<int>> mapDiff;

        for(ii = 0; ii < wordsSize; ++ii)
        {
            std::vector<int> diff(n - 1, 0);

            for(jj = 0; jj < n - 1; ++jj)
            {
                diff[jj] = words[ii][jj + 1] - words[ii][jj];
            }

            if(mapDiff.end() == mapDiff.find(diff))
            {
                mapDiff.insert( { diff, { ii } } );
            }
            else
            {
                mapDiff[diff].push_back(ii);
            }
        }

        auto itor = mapDiff.begin();
        while(mapDiff.end() != itor)
        {
            if(itor->second.size() == 1)
            {
                return words[itor->second[0]];
            }
            ++itor;
        }

        return "";
    }
};