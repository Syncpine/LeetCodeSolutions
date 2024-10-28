class Solution {
public:
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights)
    {
        const int vecSize = names.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < vecSize; ++ii)
        {
            for(jj = ii + 1; jj < vecSize; ++jj)
            {
                if(heights[ii] < heights[jj])
                {
                    std::swap(heights[ii], heights[jj]);
                    std::swap(names[ii], names[jj]);
                }
            }
        }

        return names;
    }
};