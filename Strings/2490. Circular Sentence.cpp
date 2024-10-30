class Solution {
public:
    bool isCircularSentence(const std::string& sentence)
    {
        std::vector<std::string> vec;

        std::string tmp = "";

        for(auto ch : sentence)
        {
            if(' ' == ch)
            {
                if("" != tmp)
                {
                    vec.push_back(tmp);
                    tmp = "";
                }
            }
            else
            {
                tmp += ch;
            }
        }

        if("" != tmp)
        {
            vec.push_back(tmp);
        }

        int index = 0;

        for(index = 1; index < vec.size(); ++index)
        {
            if(vec[index - 1].back() != vec[index][0])
            {
                return false;
            }
        }

        if(vec.back().back() != vec[0][0])
        {
            return false;
        }

        return true;
    }
};