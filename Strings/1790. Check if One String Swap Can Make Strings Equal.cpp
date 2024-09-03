class Solution {
public:
    bool areAlmostEqual(const std::string& s1, const std::string& s2)
    {
        std::vector<char> vec;

        const int strLength = s1.length();
        int index = 0;

        for(index = 0; index < strLength; ++index)
        {
            if(s1[index] != s2[index])
            {
                vec.push_back(s1[index]);
                vec.push_back(s2[index]);
            }
        }

        if(vec.size() == 0)
        {
            return true;
        }

        if(vec.size() == 4)
        {
            if(vec[0] == vec[3] && vec[1] == vec[2])
            {
                return true;
            }
        }

        return false;
    }
};