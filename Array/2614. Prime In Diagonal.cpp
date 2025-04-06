class Solution {
public:
    int diagonalPrime(const std::vector<std::vector<int>>& nums)
    {
        const int numsSize = nums.size();

        int ii = 0;

        int maxPrimeNumber = 0;

        for(ii = 0; ii < numsSize; ++ii)
        {
            if(nums[ii][ii] != 1 && !IsPrimeNumber(nums[ii][ii]))
            {
                maxPrimeNumber = std::max(nums[ii][ii], maxPrimeNumber);
            }
        }

        for(ii = 0; ii < numsSize; ++ii)
        {
            int jj = numsSize - ii - 1;

            if(nums[ii][jj] != 1 && !IsPrimeNumber(nums[ii][jj]))
            {
                maxPrimeNumber = std::max(nums[ii][jj], maxPrimeNumber);
            }
        }

        return maxPrimeNumber;
    }

private:
    bool IsPrimeNumber(const int value)
    {
        int a = std::sqrt(value);

        for(int index = 2; index <= a; ++index)
        {
            if(value % index == 0)
            {
                return true;
            }
        }

        return false;
    }
};