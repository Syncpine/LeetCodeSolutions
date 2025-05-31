class Solution {
public:
    int smallestIndex(const std::vector<int>& nums)
    {
        int index = 0;

        int total = 0;

        for(auto num : nums)
        {
            total = 0;

            while(num > 0)
            {
                total += num % 10;
                num = num / 10;
            }

            if(total == index)
            {
                return index;
            }

            ++index;
        }

        return -1;
    }
};