class Solution {
public:
    bool squareIsWhite(const std::string& coordinates)
    {
        return ((coordinates[0] - 'a') + coordinates[1]) % 2 == 0;
    }
};