class Solution {
public:
    std::vector<int> sumZero(const int n)
    {
        std::vector<int> vec(n, 0);

        int start = 1;
        int total = 0;

        for(int index = 1; index < n; ++index)
        {
            vec[index] = start;
            total += start;
            ++start;
        }

        vec[0] = -1 * total;

        return vec;
    }
};