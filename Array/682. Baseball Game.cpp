class Solution {
public:
    int calPoints(const std::vector<std::string>& operations)
    {
        std::vector<int> vec;
        int vecSize = 0;

        for(auto operation : operations)
        {
            if(operation == "C")
            {
                vec.erase(vec.begin() + vecSize - 1);
                --vecSize;
            }
            else if(operation == "D")
            {
                int cur = vec[vecSize - 1] * 2;
                vec.push_back(cur);
                ++vecSize;
            }
            else if(operation == "+")
            {
                int cur = vec[vecSize - 2] + vec[vecSize - 1];
                vec.push_back(cur);
                ++vecSize;
            }
            else
            {
                int cur = std::stoi(operation);
                vec.push_back(cur);
                ++vecSize;
            }
        }

        int score = 0;

        for(auto num : vec)
        {
            score += num;
        }

        return score;
    }
};