class Solution {
public:
    int numDifferentIntegers(const std::string& word)
    {
        std::map<std::string, int> set;

        std::string str = "";

        for(auto ch : word)
        {
            if('a' <= ch && ch <= 'z')
            {
                if(str != "")
                {
                    std::string s = Func(str);

                    if(set.count(s) == 0)
                    {
                        set[s] = 1;
                    }
                    else
                    {
                        ++set[s];
                    }

                    str = "";
                }
            }
            else
            {
                str += ch;
            }
        }

        if(str != "")
        {
            std::string s = Func(str);

            if(set.count(s) == 0)
            {
                set[s] = 1;
            }
            else
            {
                ++set[s];
            }
        }

        return set.size();
    }

private:
    std::string Func(const std::string& str)
    {
        std::string str2 = "";

        const int strLength = str.length();
        int index = 0;

        while(index < strLength)
        {
            if(str[index] != '0')
            {
                break;
            }

            ++index;
        }

        str2 = str.substr(index, strLength);

        return str2;
    }
};