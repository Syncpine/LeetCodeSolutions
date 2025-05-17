class Solution {
public:
    int minOperations(const std::vector<int>& nums, const int k)
    {
        std::set<int> setNums;

        for(auto num : nums)
        {
            if(setNums.end() == setNums.find(num))
            {
                setNums.insert(num);
            }
        }

        if(*(setNums.begin()) < k)
        {
            return -1;
        }
        else if(*(setNums.begin()) == k)
        {
            return setNums.size() - 1;
        }

        return setNums.size();
    }
};