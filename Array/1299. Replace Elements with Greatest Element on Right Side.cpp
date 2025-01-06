class Solution {
public:
    std::vector<int> replaceElements(std::vector<int>& arr)
    {
        const int arrSize = arr.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < arrSize - 1; ++ii)
        {
            int cur = ii + 1;
            for(jj = ii + 1; jj < arrSize; ++jj)
            {
                if(arr[jj] > arr[cur])
                {
                    cur = jj;
                }
            }

            for(jj = ii; jj < cur; ++jj)
            {
                arr[jj] = arr[cur];
            }

            ii = cur - 1;
        }

        arr[ii] = -1;

        return arr;
    }
};