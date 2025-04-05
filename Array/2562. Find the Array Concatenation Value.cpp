class Solution {
public:
    long long findTheArrayConcVal(std::vector<int>& nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        long long total = 0;

        while(start < end)
        {
            total += nums[end];

            long long cc = 1;

            while(nums[end] > 0)
            {
                nums[end] /= 10;
                cc *= 10;
            }

            total += cc * nums[start];

            ++start;
            --end;
        }

        if(start == end)
        {
            total += nums[start];
        }

        return total;
    }
};