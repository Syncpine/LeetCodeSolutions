class Solution {
public:
    std::string sortSentence(const std::string& s)
    {
        std::vector<std::string> vec(10, "");

        std::string str = "";

        for(auto ch : s)
        {
            if(ch == ' ')
            {
                std::cout << str << std::endl;

                if(str != "")
                {
                    int index = str.back() - '0';
                    str.pop_back();

                    vec[index] = str;

                    str = "";
                }

                std::cout << str << std::endl << std::endl;
            }
            else
            {
                str += ch;
            }
        }

        for(auto a : vec)
        {
            std::cout << "[" << a << "]" << std::endl;
        }

        if(str != "")
        {
            int index = str.back() - '0';
            str.pop_back();

            vec[index] = str;
        }

        str = vec[1];

        for(auto index = 2; index < vec.size(); ++index)
        {
            if(vec[index] != "")
            {
                str += ' ' + vec[index];
            }
        }

        return str;
    }
};