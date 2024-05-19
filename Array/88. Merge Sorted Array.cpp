class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
    {
        auto index1 = m + n;

        while(0 < m && 0 < n && 0 < index1)
        {
            if(nums1[m - 1] >= nums2[n - 1])
            {
                std::swap(nums1[index1 - 1], nums1[m - 1]);
                --m;
            }
            else
            {
                std::swap(nums1[index1 - 1], nums2[n - 1]);
                --n;
            }
            --index1;
        }

        while(0 < n)
        {
            std::swap(nums1[index1 - 1], nums2[n - 1]);
            --n;
            --index1;
        }
    }
};