class Solution {
public:
    std::vector<std::string> splitWordsBySeparator(const std::vector<std::string>& words, const char separator)
    {
        std::vector<std::string> vec;

        std::string str = "";

        for(auto word : words)
        {
            if(!str.empty())
            {
                vec.push_back(str);
                str.clear();
            }

            for(auto ch : word)
            {
                if(separator == ch)
                {
                    if(!str.empty())
                    {
                        vec.push_back(str);
                        str.clear();
                    }
                }
                else
                {
                    str += ch;
                }
            }
        }

        if(!str.empty())
        {
            vec.push_back(str);
        }

        return vec;
    }
};