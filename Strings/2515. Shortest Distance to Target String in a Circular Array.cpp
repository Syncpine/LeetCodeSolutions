class Solution {
public:
    int closetTarget(const std::vector<std::string>& words, const std::string& target, const int& startIndex)
    {
        const int wordsSize = words.size();

        int minStep = wordsSize;

        for(int index = 0; index < wordsSize; ++index)
        {
            if(words[index] == target)
            {
                int cur_min = wordsSize;

                int front = 0;
                int next = 0;

                if(index < startIndex)
                {
                    front = startIndex - index;
                    next = wordsSize + index - startIndex;
                }
                else
                {
                    front = wordsSize + startIndex - index;
                    next = index - startIndex;
                }

                cur_min = (front < next) ? front : next;

                minStep = (cur_min < minStep) ? cur_min : minStep;
            }
        }

        return (minStep < wordsSize) ? minStep : -1;
    }
};