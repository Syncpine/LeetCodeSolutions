class Solution {
public:
    bool judgeCircle(const std::string& moves)
    {
        int xx = 0;
        int yy = 0;

        for(auto ch : moves)
        {
            switch(ch)
            {
                case 'L':
                {
                    --xx;
                } break;
                
                case 'R':
                {
                    ++xx;
                } break;
                
                case 'U':
                {
                    ++yy;
                } break;
                
                case 'D':
                {
                    --yy;
                } break;
            }
        }

        return (xx == 0) && (yy == 0);
    }
};