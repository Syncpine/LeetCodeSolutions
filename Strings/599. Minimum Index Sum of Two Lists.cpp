#include <map>

class Solution {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2)
    {
        const int vecSize1 = list1.size();
        const int vecSize2 = list2.size();

        std::vector<std::string> retVec;
        int retVal = vecSize1 + vecSize2;

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < vecSize1; ++ii)
        {
            for(jj = 0; jj < vecSize2; ++jj)
            {
                if(list1[ii] == list2[jj])
                {
                    int tmp = ii + jj;

                    if(tmp < retVal)
                    {
                        retVec.clear();
                        retVec.push_back(list1[ii]);
                        retVal = tmp;
                    }
                    else if(tmp == retVal)
                    {
                        retVec.push_back(list1[ii]);
                    }
                }
            }
        }

        return retVec;
    }
};