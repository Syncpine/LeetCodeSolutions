class Solution {
public:
    std::vector<int> separateDigits(const std::vector<int>& nums)
    {
        std::vector<int> answer;
        int pos = 0;

        for(auto num : nums)
        {
            int len = 0;

            while(num > 0)
            {
                answer.insert(answer.begin() + pos, num % 10);
                num /= 10;
                ++len;
            }

            pos += len;
        }

        return answer;
    }
};