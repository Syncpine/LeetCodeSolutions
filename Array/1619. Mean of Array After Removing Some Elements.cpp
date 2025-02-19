class Solution {
public:
    double trimMean(std::vector<int>& arr)
    {
        std::sort(arr.begin(), arr.end());

        const int arrSize = arr.size();

        int start = arrSize * 5 / 100;
        int end = arrSize * 95 / 100;

        int total = 0;

        while(start < end)
        {
            total += arr[start];
            ++start;
        }

        return 1.0 * total / (arrSize * 90 / 100);
    }
};