class Solution {
public:
    int findNumbers(std::vector<int>& nums)
    {
        int total = 0;

        for(auto num : nums)
        {
            int count = 0;

            while(num > 0)
            {
                num /= 10;
                ++count;
            }

            total += (count % 2 == 0);
        }

        return total;
    }
};