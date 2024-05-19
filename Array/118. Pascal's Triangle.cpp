class Solution {
public:
    std::vector<std::vector<int>> generate(const int& numRows)
    {
        std::vector<std::vector<int>> vec = { { 1, }, };
        auto index = 1;

        while(index < numRows)
        {
            std::vector<int> tmpVec(index + 1, 1);
            for(int ii = 1; ii < index; ++ii)
            {
                tmpVec[ii] = vec[index - 1][ii - 1] + vec[index - 1][ii];
            }

            vec.push_back(tmpVec);
            ++index;
        }

        return vec;
    }
};