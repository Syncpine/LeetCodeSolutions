class Solution {
public:
    bool checkIfExist(std::vector<int>& arr)
    {
        std::sort(arr.begin(), arr.end());

        const int arrSize = arr.size();

        int ii = arrSize - 1;
        int jj = 0;

        while(ii >= 0)
        {
            for(jj = 0; jj < arrSize; ++jj)
            {
                if(jj == ii)
                {
                    continue;
                }

                if(2 * arr[jj] == arr[ii])
                {
                    return true;
                }
            }

            --ii;
        }

        return false;
    }
};