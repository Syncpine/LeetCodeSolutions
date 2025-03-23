class Solution {
public:
    std::vector<int> numberOfPairs(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        for(auto num : nums)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, 1 } );
            }
            else
            {
                ++mapNums[num];
            }
        }

        std::vector<int> answer(2, 0);

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            answer[0] += itor->second / 2;
            answer[1] += itor->second % 2;

            ++itor;
        }

        return answer;
    }
};