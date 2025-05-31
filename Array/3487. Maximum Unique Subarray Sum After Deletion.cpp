class Solution {
public:
    int maxSum(const std::vector<int>& nums)
    {
        std::set<int> setNums;
        int maxNum = nums[0];

        for(auto num : nums)
        {
            if(num > 0)
            {
                if(setNums.end() == setNums.find(num))
                {
                    setNums.insert(num);
                }
            }

            maxNum = std::max(num, maxNum);
        }

        if(setNums.size() > 0)
        {
            int total = 0;

            for(auto num : setNums)
            {
                total += num;
            }

            return total;
        }

        return maxNum;
    }
};