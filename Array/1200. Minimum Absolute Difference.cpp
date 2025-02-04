class Solution {
public:
    std::vector<std::vector<int>> minimumAbsDifference(std::vector<int>& arr)
    {
        std::sort(arr.begin(), arr.end());

        const int arrSize = arr.size();
        int index = 0;

        int minDiff;

        for(index = 1; index < arrSize; ++index)
        {
            int diff = arr[index] - arr[index - 1];
            minDiff = (diff < minDiff) ? diff : minDiff;
        }

        std::vector<std::vector<int>> vecMinDiff;

        for(index = 1; index < arrSize; ++index)
        {
            int diff = arr[index] - arr[index - 1];
            if(diff == minDiff)
            vecMinDiff.push_back( { arr[index - 1], arr[index] } );
        }

        return vecMinDiff;
    }
};