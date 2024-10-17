class Solution {
public:
    int divisorSubstrings(const int& num, const int& k)
    {
        int count = 0;

        std::vector<int> vec;

        int num_2 = num;

        while(num_2 > 0)
        {
            vec.insert(vec.begin(), num_2 % 10);
            num_2 /= 10;
        }

        for(int ii = 0; ii <= vec.size() - k; ++ii)
        {
            int tmp = 0;
            for(int jj = 0; jj < k; ++jj)
            {
                tmp = 10 * tmp + vec[ii + jj];
            }

            if(0 == tmp)
            {
                continue;
            }

            if(0 == num % tmp)
            {
                ++count;
            }
        }

        return count;
    }
};