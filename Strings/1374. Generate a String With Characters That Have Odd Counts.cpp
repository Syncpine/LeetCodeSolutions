class Solution {
public:
    std::string generateTheString(int n)
    {
        if(n % 2 == 0)
        {
            std::string str(n - 1, 'a');
            str += 'b';
            return str;
        }

        std::string str(n, 'a');
        return str;
    }
};