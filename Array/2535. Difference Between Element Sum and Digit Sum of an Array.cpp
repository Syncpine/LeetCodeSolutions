class Solution {
public:
    int differenceOfSum(const std::vector<int>& nums)
    {
        int elementSum = 0;
        int digitSum = 0;

        for(auto num : nums)
        {
            elementSum += num;

            while(num > 0)
            {
                digitSum += num % 10;
                num /= 10;
            }
        }

        return std::abs(elementSum - digitSum);
    }
};