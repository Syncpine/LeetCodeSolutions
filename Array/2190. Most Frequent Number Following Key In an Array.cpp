class Solution {
public:
    int mostFrequent(const std::vector<int>& nums, const int key)
    {
        const int numsSize = nums.size();

        int index = 0;

        std::map<int, int> mapTraget;

        for(index = 0; index < numsSize - 1; ++index)
        {
            if(nums[index] == key)
            {
                int target = nums[index + 1];

                if(mapTraget.end() == mapTraget.find(target))
                {
                    mapTraget.insert( { target, 1 } );
                }
                else
                {
                    ++mapTraget[target];
                }
            }
        }

        auto maxItor = mapTraget.begin();

        auto itor = mapTraget.begin();
        while(mapTraget.end() != itor)
        {
            if(itor->second > maxItor->second)
            {
                maxItor = itor;
            }

            ++itor;
        }

        return maxItor->first;
    }
};