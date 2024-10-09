class Solution {
public:
    std::vector<std::string> divideString(const std::string& s, const int& k, const char& fill)
    {
        std::vector<std::string> vec;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength - k)
        {
            vec.push_back(s.substr(index, k));
            index += k;
        }

        if(strLength - index < k)
        {
            std::string tmp = s.substr(index);

            int ii = k + index - strLength;

            while(ii--)
            {
                tmp += fill;
            }

            vec.push_back(tmp);
        }
        else if(strLength - index == k)
        {
            vec.push_back(s.substr(index));
        }

        return vec;
    }
};