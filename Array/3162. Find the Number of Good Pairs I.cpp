class Solution {
public:
    int numberOfPairs(const std::vector<int>& nums1, const std::vector<int>& nums2, const int k)
    {
        int ans = 0;

        for(auto num1 : nums1)
        {
            for(auto num2 : nums2)
            {
                if(num1 % (num2 * k) == 0)
                {
                    ++ans;
                }
            }
        }

        return ans;
    }
};