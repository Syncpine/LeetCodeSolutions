class Solution {
public:
    bool validMountainArray(const std::vector<int>& arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        if(start == end)
        {
            return false;
        }

        if(arr[start] >= arr[start + 1])
        {
            return false;
        }

        if(arr[end - 1] <= arr[end])
        {
            return false;
        }

        while(start < end)
        {
            if(arr[start] == arr[start + 1])
            {
                return false;
            }
            else if(arr[start] > arr[start + 1])
            {
                break;
            }

            ++start;
        }

        while(end > 0)
        {
            if(arr[end - 1] == arr[end])
            {
                return false;
            }
            else if(arr[end - 1] < arr[end])
            {
                break;
            }

            --end;
        }

        return start == end;
    }
};