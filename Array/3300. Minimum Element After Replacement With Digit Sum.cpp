class Solution {
public:
    int minElement(const std::vector<int>& nums)
    {
        int minElement = nums[0];

        for(auto num : nums)
        {
            int curElement = 0;

            while(num > 0)
            {
                curElement = curElement + num % 10;
                num = num / 10;
            }

            minElement = std::min(curElement, minElement);
        }

        return minElement;
    }
};