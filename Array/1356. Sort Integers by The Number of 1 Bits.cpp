class Solution {
public:
    std::vector<int> sortByBits(std::vector<int>& arr)
    {
        const int arrsize = arr.size();

        std::vector<int> nums(arrsize, 0);

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < arrsize; ++ii)
        {
            nums[ii] = Func(arr[ii]);
        }

        for(ii = 0; ii < arrsize; ++ii)
        {
            for(jj = ii + 1; jj < arrsize; ++jj)
            {
                if(nums[ii] > nums[jj])
                {
                    std::swap(nums[ii], nums[jj]);
                    std::swap(arr[ii], arr[jj]);
                }
                else if(nums[ii] == nums[jj])
                {
                    if(arr[ii] > arr[jj])
                    {
                        std::swap(nums[ii], nums[jj]);
                        std::swap(arr[ii], arr[jj]);
                    }
                }
            }
        }

        return arr;
    }

private:
    int Func(int value)
    {
        int count = 0;

        for(int index = 0; index < m_V.size(); ++index)
        {
            if(value >= m_V[index])
            {
                ++count;
                value -= m_V[index];
            }
        }

        return count;
    }

private:
    const std::vector<int> m_V = 
    {
        8192,
        4096,
        2048,
        1024,
        512,
        256,
        128,
        64,
        32,
        16,
        8,
        4,
        2,
        1
    };
};