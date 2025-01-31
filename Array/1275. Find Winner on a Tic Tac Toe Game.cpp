class Solution {
public:
    std::string tictactoe(const std::vector<std::vector<int>>& moves)
    {
        const int movesSize = moves.size();
        int index = 0;

        for(index = 0; index < movesSize; index += 2)
        {
            int xx = moves[index][0];
            int yy = moves[index][1];

            matrix[xx][yy] = 1;
        }

        for(index = 1; index < movesSize; index += 2)
        {
            int xx = moves[index][0];
            int yy = moves[index][1];

            matrix[xx][yy] = 2;
        }

        if(IsWinner(1))
        {
            return "A";
        }

        if(IsWinner(2))
        {
            return "B";
        }

        if(movesSize < 9)
        {
            return "Pending";
        }

        return "Draw";
    }

private:
    bool IsWinner(int player)
    {
        if(matrix[0][0] == player)
        {
            if((matrix[0][0] == matrix[0][1] && matrix[0][0] == matrix[0][2])
                || (matrix[0][0] == matrix[1][0] && matrix[0][0] == matrix[2][0]))
            {
                return true;
            }
        }

        if(matrix[1][1] == player)
        {
            if((matrix[1][1] == matrix[1][0] && matrix[1][1] == matrix[1][2])
                || (matrix[1][1] == matrix[0][1] && matrix[1][1] == matrix[2][1])
                || (matrix[1][1] == matrix[0][0] && matrix[1][1] == matrix[2][2])
                || (matrix[1][1] == matrix[0][2] && matrix[1][1] == matrix[2][0]))
            {
                return true;
            }
        }

        if(matrix[2][2] == player)
        {
            if((matrix[2][2] == matrix[2][0] && matrix[2][2] == matrix[2][1])
                || (matrix[2][2] == matrix[0][2] && matrix[2][2] == matrix[1][2]))
            {
                return true;
            }
        }

        return false;
    }

private:
    // 空格: ' ' -> 0
    // A: 'X' -> 1
    // B: 'O' -> 2
    std::vector<std::vector<int>> matrix{3, std::vector<int>(3, 0)};
};