class Solution {
public:
    int returnToBoundaryCount(const std::vector<int>& nums)
    {
        int pos = 0;

        int count = 0;

        for(auto num : nums)
        {
            pos += num;
            count += (pos == 0);
        }

        return count;
    }
};