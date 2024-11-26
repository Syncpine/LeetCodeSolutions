class Solution {
public:
    bool checkTwoChessboards(const std::string& coordinate1, const std::string& coordinate2)
    {
        return IsWhite(coordinate1) == IsWhite(coordinate2);
    }

private:
    bool IsWhite(const std::string& coordinate)
    {
        if(((coordinate[0] - 'a') % 2 == 0 && coordinate[1] % 2 == 1)
            || ((coordinate[0] - 'a') % 2 == 1 && coordinate[1] % 2 == 0))
        {
            return true;
        }

        return false;
    }
};