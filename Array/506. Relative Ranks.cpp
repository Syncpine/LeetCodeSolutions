class Solution {
public:
    std::vector<string> findRelativeRanks(vector<int>& score)
    {
        const int scoreSize = score.size();

        std::vector<std::string> vecStr(scoreSize, "");

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < scoreSize; ++ii)
        {
            int cur = 1;

            for(jj = 0; jj < scoreSize; ++jj)
            {
                if(score[jj] > score[ii])
                {
                    ++cur;
                }
            }

            switch(cur)
            {
                case 1:
                {
                    vecStr[ii] = ("Gold Medal");
                } break;

                case 2:
                {
                    vecStr[ii] = ("Silver Medal");
                } break;

                case 3:
                {
                    vecStr[ii] = ("Bronze Medal");
                } break;

                default:
                {
                    vecStr[ii] = (std::to_string(cur));
                } break;
            }
        }

        return vecStr;
    }
};