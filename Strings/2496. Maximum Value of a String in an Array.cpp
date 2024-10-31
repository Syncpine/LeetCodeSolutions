class Solution {
public:
    int maximumValue(const std::vector<std::string>& strs)
    {
        int max_num = 0;

        for(auto str : strs)
        {
            bool hasLetter = false;

            for(auto ch : str)
            {
                if('a' <= ch && ch <= 'z')
                {
                    hasLetter = true;
                    break;
                }
            }

            if(hasLetter)
            {
                max_num = (str.length() > max_num) ? str.length() : max_num;
            }
            else
            {
                int tmp = std::stoi(str);
                max_num = (tmp > max_num) ? tmp : max_num;
            }
        }

        return max_num;
    }
};