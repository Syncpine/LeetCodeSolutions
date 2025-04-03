class Solution {
public:
    int getCommon(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        const int nums1Size = nums1.size();
        const int nums2Size = nums2.size();

        int index1 = 0;
        int index2 = 0;

        while(index1 < nums1Size && index2 < nums2Size)
        {
            if(nums1[index1] == nums2[index2])
            {
                return nums1[index1];
            }
            else if(nums1[index1] < nums2[index2])
            {
                ++index1;
            }
            else
            {
                ++index2;
            }
        }

        return -1;
    }
};