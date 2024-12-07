class Solution {
public:
    int minDeletionSize(const std::vector<std::string>& strs)
    {
        int count = 0;

        const int row = strs.size();
        const int column = strs[0].length();

        int ii = 0;
        int jj = 0;

        for(jj = 0; jj < column; ++jj)
        {
            bool flag = true;

            for(int ii = 0; ii < row - 1; ++ii)
            {
                if(strs[ii][jj] > strs[ii + 1][jj])
                {
                    flag = false;
                    break;
                }
            }

            if(!flag)
            {
                ++count;
            }
        }

        return count;
    }
};