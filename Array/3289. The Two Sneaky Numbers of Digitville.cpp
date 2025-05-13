class Solution {
public:
    std::vector<int> getSneakyNumbers(const std::vector<int>& nums)
    {
        std::map<int, int> mapNums;

        std::vector<int> ans;

        for(auto num : nums)
        {
            if(mapNums.end() == mapNums.find(num))
            {
                mapNums.insert( { num, 1 } );
            }
            else
            {
                ans.push_back(num);
            }
        }

        return ans;
    }
};