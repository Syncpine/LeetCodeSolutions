class Solution {
public:
    int sumOddLengthSubarrays(const std::vector<int>& arr)
    {
        int total = 0;

        const int arrSize = arr.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < arrSize; ii += 2)
        {
            int start = 0;
            int end = start + ii;

            int subTotal = 0;

            for(jj = start; jj <= end; ++jj)
            {
                subTotal += arr[jj];
            }

            total += subTotal;

            while(end < arrSize - 1)
            {
                subTotal -= arr[start];

                ++start;
                ++end;

                subTotal += arr[end];

                total += subTotal;
            }
        }

        return total;
    }
};