class Solution {
public:
    std::vector<int> intersection(std::vector<std::vector<int>>& nums)
    {
        std::map<int, int> mapNums;

        for(auto vec : nums)
        {
            for(auto num : vec)
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
        }

        const int m = nums.size();

        std::vector<int> ans;

        auto itor = mapNums.begin();
        while(mapNums.end() != itor)
        {
            if(m == itor->second)
            {
                ans.push_back(itor->first);
            }

            ++itor;
        }

        return ans;
    }
};