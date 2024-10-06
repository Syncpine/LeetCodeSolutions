class Solution {
public:
    int mostWordsFound(const std::vector<std::string>& sentences)
    {
        int count = 0;

        for(auto sentence : sentences)
        {
            int tmp = 1;

            for(auto ch : sentence)
            {
                if(ch == ' ')
                {
                    ++tmp;
                }
            }

            count = (tmp > count) ? tmp : count;
        }

        return count;
    }
};