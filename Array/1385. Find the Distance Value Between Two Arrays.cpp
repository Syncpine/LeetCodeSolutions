class Solution {
public:
    int findTheDistanceValue(const std::vector<int>& arr1, const std::vector<int>& arr2, const int d)
    {
        int count = 0;

        const int arr1Size = arr1.size();
        const int arr2Size = arr2.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < arr1Size; ++ii)
        {
            bool flag = true;

            for(jj = 0; jj < arr2Size; ++jj)
            {
                if(std::abs(arr1[ii] - arr2[jj]) <= d)
                {
                    flag = false;
                    break;
                }
            }

            if(true == flag)
            {
                ++count;
            }
        }

        return count;
    }
};