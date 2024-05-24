class Solution {
public:
    std::vector<int> nextGreaterElement(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        const auto numSize1 = nums1.size();
        const auto numSize2 = nums2.size();

        std::vector<int> retVec(numSize1, -1);

        for(auto index1 = 0; index1 < numSize1; ++index1)
        {
            int position = 0;

            while(numSize2 > position)
            {
                if(nums1[index1] == nums2[position])
                {
                    break;
                }

                ++position;
            }

            while(numSize2 > position)
            {
                if(nums1[index1] < nums2[position])
                {
                    break;
                }

                ++position;
            }

            if(numSize2 > position)
            {
                retVec[index1] = nums2[position];
            }
        }

        return retVec;
    }
};