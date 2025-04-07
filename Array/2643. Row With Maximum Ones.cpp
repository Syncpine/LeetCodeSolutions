class Solution {
public:
    std::vector<int> rowAndMaximumOnes(const std::vector<std::vector<int>>& mat)
    {
        std::vector<int> answer = { 0, 0 };

        const int matSize = mat.size();

        int row = 0;

        for(row = 0; row < matSize; ++row)
        {
            int count = 0;

            for(auto num : mat[row])
            {
                count += num;
            }

            if(count > answer[1])
            {
                answer[0] = row;
                answer[1] = count;
            }
        }

        return answer;
    }
};