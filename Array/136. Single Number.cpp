class Solution {
public:
    int singleNumber(const std::vector<int>& nums)
    {
        int ans = 0;

        for(auto ii : nums)
        {
            ans ^= ii;
        }

        return ans;
    }
};