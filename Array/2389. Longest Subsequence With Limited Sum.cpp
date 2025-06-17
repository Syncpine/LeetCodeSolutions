class Solution {
public:
    std::vector<int> answerQueries(std::vector<int>& nums, const std::vector<int>& queries)
    {
        std::sort(nums.begin(), nums.end());

        std::vector<int> ans;

        const int numsSize = nums.size();

        int index = 0;

        for(auto querie : queries)
        {
            int total = 0;

            for(index = 0; index < numsSize; ++index)
            {
                if(total + nums[index] > querie)
                {
                    break;
                }

                total += nums[index];
            }

            ans.push_back(index);
        }

        return ans;
    }
};