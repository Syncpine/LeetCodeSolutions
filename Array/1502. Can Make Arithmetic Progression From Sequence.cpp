class Solution {
public:
    bool canMakeArithmeticProgression(std::vector<int>& arr)
    {
        std::sort(arr.begin(), arr.end());

        const int arrSize = arr.size();
        int index = 0;

        const int number = arr[1] - arr[0];

        for(index = 1; index < arrSize; ++index)
        {
            if(number != arr[index] - arr[index - 1])
            {
                return false;
            }
        }

        return true;
    }
};