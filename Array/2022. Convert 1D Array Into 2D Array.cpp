class Solution {
public:
    std::vector<std::vector<int>> construct2DArray(const std::vector<int>& original, const int m, const int n)
    {
        const int originalSize = original.size();

        if(originalSize != m * n)
        {
            return { };
        }

        std::vector<std::vector<int>> mat(m, std::vector<int>(n, 0));

        int index = 0;

        int ii = 0;
        int jj = 0;

        while(index < originalSize)
        {
            if(jj == n)
            {
                jj = 0;
                ++ii;
            }

            mat[ii][jj] = original[index];

            ++jj;
            ++index;
        }

        return mat;
    }
};