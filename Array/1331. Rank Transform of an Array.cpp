class Solution {
public:
    std::vector<int> arrayRankTransform(const std::vector<int>& arr)
    {
        const int arrSize = arr.size();

        int ii = 0;

        std::map<int, int> mapArr;

        for(auto num : arr)
        {
            if(mapArr.end() == mapArr.find(num))
            {
                mapArr.insert( { num, 1 } );
            }
        }

        int count = 1;

        auto itor = mapArr.begin();
        while(mapArr.end() != itor)
        {
            itor->second = count;
            ++itor;
            ++count;
        }

        std::vector<int> vecIndex(arrSize, 0);

        for(ii = 0; ii < arrSize; ++ii)
        {
            int num = arr[ii];
            vecIndex[ii] = mapArr[num];
        }

        return vecIndex;
    }
};