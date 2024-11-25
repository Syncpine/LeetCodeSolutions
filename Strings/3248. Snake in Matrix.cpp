class Solution {
public:
    int finalPositionOfSnake(int n, const std::vector<std::string>& commands)
    {
        int xx = 0;
        int yy = 0;

        for(auto command : commands)
        {
            if(command == "LEFT")
            {
                --xx;
            }
            else if(command == "RIGHT")
            {
                ++xx;
            }
            else if(command == "UP")
            {
                --yy;
            }
            else if(command == "DOWN")
            {
                ++yy;
            }
        }

        return n * yy + xx;
    }
};