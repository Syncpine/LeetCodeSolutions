class Solution {
public:
    int maxSum(const std::vector<int>& nums)
    {
        std::map<int, std::vector<int>> mapNums;

        for(auto num : nums)
        {
            int maxDigit = 0;

            int tmpNum = num;

            while(tmpNum > 0)
            {
                int curDidgt = tmpNum % 10;
                tmpNum = tmpNum / 10;

                maxDigit = std::max(curDidgt, maxDigit);
            }

            if(mapNums.end() == mapNums.find(maxDigit))
            {
                mapNums.insert( { maxDigit, std::vector<int>(2, 0) } );
            }

            if(mapNums[maxDigit][1] < num)
            {
                mapNums[maxDigit][1] = num;

                if(mapNums[maxDigit][0] < mapNums[maxDigit][1])
                {
                    std::swap(mapNums[maxDigit][0], mapNums[maxDigit][1]);
                }
            }
        }

        int total = -1;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(itor->second[0] > 0 && itor->second[1] > 0)
            {
                int tmp = itor->second[0] + itor->second[1];
                total = std::max(tmp, total);
            }

            ++itor;
        }

        return total;
    }
};