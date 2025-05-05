class Solution {
public:
    bool isArraySpecial(const std::vector<int>& nums)
    {
        bool flag = (nums[0] % 2 != 0);

        for(auto num : nums)
        {
            if(flag != num % 2)
            {
                return false;
            }

            flag = !flag;
        }

        return true;
    }
};