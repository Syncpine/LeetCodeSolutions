class Solution {
public:
    int finalValueAfterOperations(const std::vector<std::string>& operations)
    {
        int value = 0;

        for(auto operation : operations)
        {
            if("++X" == operation || "X++" == operation)
            {
                ++value;
            }
            else
            {
                --value;
            }
        }

        return value;
    }
};