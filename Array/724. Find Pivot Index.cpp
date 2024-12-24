class Solution {
public:
    int pivotIndex(const std::vector<int>& nums)
    {
        if(nums.size() == 1)
        {
            return 0;
        }

        int middle = 0;

        int sumLeft = 0;
        int sumRight = 0;

        const int numsSize = nums.size();

        for(int index = middle + 1; index < numsSize; ++index)
        {
            sumRight += nums[index];
        }

        while(middle < numsSize - 1)
        {
            if(sumLeft == sumRight)
            {
                return middle;
            }

            sumLeft += nums[middle];
            sumRight -= nums[middle + 1];

            ++middle;
        }

        if(sumLeft == sumRight)
        {
            return middle;
        }

        return -1;
    }
};