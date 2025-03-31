class Solution {
public:
    int captureForts(const std::vector<int>& forts)
    {
        std::vector<int> vec;

        int count_0 = 10;

        for(auto fort : forts)
        {
            if(fort == 0)
            {
                ++count_0;
            }
            else
            {
                if(count_0 > 10)
                {
                    vec.push_back(count_0);
                    count_0 = 10;
                }

                vec.push_back(fort);
            }
        }

        if(count_0 > 10)
        {
            vec.push_back(count_0);
        }

        const int vecSize = vec.size();
        int index = 0;

        int maxNum = 0;

        for(index = 1; index < vecSize - 1; ++index)
        {
            if(vec[index] != -1 && vec[index] != 1)
            {
                if((vec[index - 1] == -1 && vec[index + 1] == 1)
                    || (vec[index - 1] == 1 && vec[index + 1] == -1))
                {
                    maxNum = std::max(vec[index] - 10, maxNum);
                }
            }
        }

        return maxNum;
    }
};