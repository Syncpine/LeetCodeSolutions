class Solution {
public:
    std::vector<std::string> findOcurrences(const std::string& text, const std::string& first, const std::string& second)
    {
        std::vector<std::string> retVec;

        std::vector<std::string> vecStr;

        _SplitString(text, ' ', vecStr);

        const int vecSize = vecStr.size();
        int index = 0;

        while(index < vecSize - 2)
        {
            if(vecStr[index] == first && vecStr[index + 1] == second)
            {
                retVec.push_back(vecStr[index + 2]);
            }

            ++index;
        }

        return retVec;
    }

private:
    void _SplitString(const std::string& str, char ch, std::vector<std::string>& vecStr)
    {
        std::string temp = "";

        for(auto ii : str)
        {
            if(ii == ch)
            {
                if(temp != "")
                {
                    vecStr.push_back(temp);
                    temp = "";
                }
            }
            else
            {
                temp += ii;
            }
        }

        if(temp != "")
        {
            vecStr.push_back(temp);
        }
    }
};