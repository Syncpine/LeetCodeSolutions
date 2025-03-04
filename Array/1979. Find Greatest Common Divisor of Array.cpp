class Solution {
public:
    int findGCD(const std::vector<int>& nums)
    {
        int minNum = nums[0];
        int maxNum = nums[0];

        for(auto num : nums)
        {
            minNum = (num < minNum) ? num : minNum;
            maxNum = (num > maxNum) ? num : maxNum;
        }

        return gcd(minNum, maxNum);
    }

private:
    // 最大公约数
    int gcd(int a, int b)
    {
        if (a % b == 0)
        {
            return b;
        }

        return gcd(b, a % b);
    }
};