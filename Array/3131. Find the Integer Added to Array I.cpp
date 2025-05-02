class Solution {
public:
    int addedInteger(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        int minNum1 = nums1[0];

        for(auto num : nums1)
        {
            minNum1 = std::min(num ,minNum1);
        }

        int minNum2 = nums2[0];

        for(auto num : nums2)
        {
            minNum2 = std::min(num ,minNum2);
        }

        return minNum2 - minNum1;
    }
};