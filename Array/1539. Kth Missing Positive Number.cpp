class Solution {
public:
    int findKthPositive(const std::vector<int>& arr, int k)
    {
        int cur = 1;

        for(auto num : arr)
        {
            int diff = num - cur;

            if(diff == 0)
            {
                ++cur;
                continue;
            }

            if(diff >= k)
            {
                return cur + k - 1;
            }

            cur = num + 1;
            k -= diff;
        }

        return cur + k - 1;
    }
};