class Solution {
public:
    int countElements(const std::vector<int>& nums)
    {
        int smaller = nums[0];
        int greater = nums[0];

        for(auto num : nums)
        {
            smaller = std::min(num, smaller);
            greater = std::max(num, greater);
        }

        int total = 0;

        for(auto num : nums)
        {
            if(smaller < num && num < greater)
            {
                ++total;
            }
        }

        return total;
    }
};