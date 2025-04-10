class Solution {
public:
    int isWinner(const std::vector<int>& player1, const std::vector<int>& player2)
    {
        int score1 = GetScore(player1);
        int score2 = GetScore(player2);

        if(score1 > score2)
        {
            return 1;
        }
        else if(score1 < score2)
        {
            return 2;
        }
        else
        {
            return 0;
        }
    }

private:
    int GetScore(const std::vector<int>& player)
    {
        const int n = player.size();

        int index = 0;

        int pre_2 = 0;
        int pre_1 = 0;

        int score = 0;

        while(index < n)
        {
            if(pre_2 == 10 || pre_1 == 10)
            {
                score += 2 * player[index];
            }
            else
            {
                score += player[index];
            }

            pre_2 = pre_1;
            pre_1 = player[index];

            ++index;
        }

        return score;
    }
};