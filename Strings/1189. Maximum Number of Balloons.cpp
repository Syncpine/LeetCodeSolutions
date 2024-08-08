class Solution {
public:
    int maxNumberOfBalloons(const std::string& text)
    {
        std::vector<int> nums(5, 0); // nums[i] of count for 'b', 'a', 'l', 'o', 'n'

        for(auto ch : text)
        {
            switch(ch)
            {
                case 'b':
                {
                    ++nums[0];
                } break;

                case 'a':
                {
                    ++nums[1];
                } break;

                case 'l':
                {
                    ++nums[2];
                } break;

                case 'o':
                {
                    ++nums[3];
                } break;

                case 'n':
                {
                    ++nums[4];
                } break;

                default: break;
            }
        }

        nums[2] /= 2;   // count 'l' / 2
        nums[3] /= 2;   // count 'o' / 2

        auto minValue = nums[0];

        for(auto num : nums)
        {
            minValue = std::min(minValue, num);
        }

        return minValue;
    }
};