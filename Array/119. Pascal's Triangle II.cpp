class Solution {
public:
    std::vector<int> getRow(const int& rowIndex)
    {
        std::vector<int> vec(rowIndex + 1, 1);
        std::vector<int> tmpVec(rowIndex + 1, 1);

        for(int ii = 0; ii <= rowIndex; ++ii)
        {
            for(int jj = 1; jj < ii; ++jj)
            {
                vec[jj] = tmpVec[jj - 1] + tmpVec[jj];
            }

            tmpVec = vec;
        }

        return vec;
    }
};