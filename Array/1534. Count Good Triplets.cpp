class Solution {
public:
    int countGoodTriplets(const std::vector<int>& arr, const int a, const int b, const int c)
    {
        const int arrSize = arr.size();

        int ii = 0;
        int jj = 0;
        int kk = 0;

        int total = 0;

        for(ii = 0; ii < arrSize; ++ii)
        {
            for(jj = ii + 1; jj < arrSize; ++jj)
            {
                if(std::abs(arr[ii] - arr[jj]) > a)
                {
                    continue;
                }

                for(kk = jj + 1; kk < arrSize; ++kk)
                {
                    if(std::abs(arr[jj] - arr[kk]) <= b
                        && std::abs(arr[ii] - arr[kk]) <= c)
                    {
                        ++total;
                    }
                }
            }
        }

        return total;
    }
};