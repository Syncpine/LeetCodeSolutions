class Solution {
public:
    int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize)
    {
        const int boxTypesSize = boxTypes.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < boxTypesSize; ++ii)
        {
            for(jj = ii + 1; jj < boxTypesSize; ++jj)
            {
                if(boxTypes[ii][1] < boxTypes[jj][1])
                {
                    std::swap(boxTypes[ii][0], boxTypes[jj][0]);
                    std::swap(boxTypes[ii][1], boxTypes[jj][1]);
                }
            }
        }

        int total = 0;

        ii = 0;

        while(truckSize > 0)
        {
            if(ii == boxTypesSize)
            {
                break;
            }

            if(boxTypes[ii][0] > 0)
            {
                --boxTypes[ii][0];
                total += boxTypes[ii][1];
                --truckSize;
            }
            else
            {
                ++ii;
            }
        }

        return total;
    }
};