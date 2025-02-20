class Solution {
public:
    int getMaximumGenerated(const int n)
    {
        if(n == 0)
        {
            return 0;
        }

        std::vector<int> vec(n + 1, 0);

        vec[0] = 0;
        vec[1] = 1;

        for(int index = 2; index <= n; ++index)
        {
            int sub = index / 2;

            if(index == sub * 2)
            {
                vec[index] = vec[sub];
            }
            else
            {
                vec[index] = vec[sub] + vec[sub + 1];
            }
        }

        int maxNum = vec[0];

        for(auto num : vec)
        {
            maxNum = (num > maxNum) ? num : maxNum;
        }

        return maxNum;
    }
};