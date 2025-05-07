class Solution {
public:
    int maxHeightOfTriangle(int red, int blue)
    {
        return std::max(GetHeight(red, blue), GetHeight(blue, red));
    }

private:
    int GetHeight(int ball1, int ball2)
    {
        int height = 0;

        int curBall = 1;
        bool flag = true;

        while(true)
        {
            if(flag)
            {
                if(ball1 < curBall)
                {
                    break;
                }

                ball1 -= curBall;
            }
            else
            {
                if(ball2 < curBall)
                {
                    break;
                }

                ball2 -= curBall;
            }

            ++curBall;
            flag = !flag;

            ++height;
        }

        return height;
    }
};