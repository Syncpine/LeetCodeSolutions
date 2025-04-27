class Solution {
public:
    std::vector<int> resultArray(const std::vector<int>& nums)
    {
        const int n = nums.size();

        std::vector<int> arr1 = { nums[0] };
        std::vector<int> arr2 = { nums[1] };

        int index = 0;

        for(index = 2; index < n; ++index)
        {
            if(arr1.back() > arr2.back())
            {
                arr1.push_back(nums[index]);
            }
            else
            {
                arr2.push_back(nums[index]);
            }
        }

        std:vector<int> result;

        result.insert(result.end(), arr1.begin(), arr1.end());
        result.insert(result.end(), arr2.begin(), arr2.end());

        return result;
    }
};