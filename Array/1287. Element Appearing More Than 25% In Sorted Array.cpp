class Solution {
public:
    int findSpecialInteger(const std::vector<int>& arr)
    {
        const int arrSize = arr.size();
        int index = 0;

        int count = 1;

        for(index = 1; index < arrSize; ++index)
        {
            if(arr[index] == arr[index - 1])
            {
                ++count;
            }
            else
            {
                count = 1;
            }

            if(count * 4 > arrSize)
            {
                return arr[index];
            }
        }

        int ret = arr[0];

        return ret;
    }
};