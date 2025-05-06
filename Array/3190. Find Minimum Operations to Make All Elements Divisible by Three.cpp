class Solution {
public:
    int minimumOperations(const std::vector<int>& nums)
    {
        int total = 0;

        for(auto num : nums)
        {
            switch(num % 3)
            {
                case 1:
                case 2:
                {
                    ++total;
                } break;
            }
        }

        return total;
    }
};