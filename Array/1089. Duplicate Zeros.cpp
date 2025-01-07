class Solution {
public:
    void duplicateZeros(std::vector<int>& arr)
    {
        const int arrSize = arr.size();

        std::vector<int> vec(arr.begin(), arr.end());

        int fast = 0;
        int slow = 0;

        while(fast < arrSize)
        {
            if(vec[slow] == 0)
            {
                arr[fast] = 0;

                if(fast < arrSize - 1)
                {
                    arr[fast + 1] = 0;
                }

                fast += 2;
            }
            else
            {
                arr[fast] = vec[slow];

                fast += 1;
            }

            ++slow;
        }

        return ;
    }
};