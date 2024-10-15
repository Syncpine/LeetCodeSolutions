class Solution {
public:
    std::string removeDigit(const std::string& number, const char& digit)
    {
        std::vector<std::string> vec;

        std::string tmp  = "";

        const int strLength = number.length();
        int index = 0;

        while(index < strLength)
        {
            if(digit == number[index])
            {
                tmp = number.substr(0, index) + number.substr(index + 1);
                vec.push_back(tmp);
                tmp = "";
            }

            ++index;
        }

        int cur = 0;

        for(int ii = 0; ii < vec.size(); ++ii)
        {
            for(int jj = 0; jj < vec[cur].length(); ++jj)
            {
                if(vec[ii][jj] > vec[cur][jj])
                {
                    cur = ii;
                    break;
                }
                else if(vec[ii][jj] < vec[cur][jj])
                {
                    break;
                }
            }
        }

        return vec[cur];
    }
};