class Solution {
public:
    bool threeConsecutiveOdds(const std::vector<int>& arr)
    {
        const int arrSize = arr.size();
        int index = 0;

        for(index = 0; index < arrSize - 2; ++index)
        {
            if((arr[index] % 2 == 1)
                && (arr[index + 1] % 2 == 1)
                && (arr[index + 2] % 2 == 1))
            {
                return true;
            }
        }

        return false;
    }
};