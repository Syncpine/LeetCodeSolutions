class Solution {
public:
    int distinctAverages(std::vector<int>& nums)
    {
        std::sort(nums.begin(), nums.end());

        int start = 0;
        int end = nums.size() - 1;

        std::set<int> setNums;

        while(start < end)
        {
            int sum = nums[start] + nums[end];

            if(setNums.end() == setNums.find(sum))
            {
                setNums.insert(sum);
            }

            ++start;
            --end;
        }

        return setNums.size();
    }
};