class Solution {
public:
    int maxDivScore(const std::vector<int>& nums, const std::vector<int>& divisors)
    {
        int minDivisor = divisors[0];
        int maxScore = 0;

        for(auto divisor : divisors)
        {
            int score = 0;

            for(auto num : nums)
            {
                if(num % divisor == 0)
                {
                    ++score;
                }
            }

            if(score > maxScore)
            {
                maxScore = score;
                minDivisor = divisor;
            }
            else if(score == maxScore)
            {
                minDivisor = std::min(divisor, minDivisor);
            }
        }

        return minDivisor;
    }
};