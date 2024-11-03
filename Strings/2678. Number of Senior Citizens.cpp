class Solution {
public:
    int countSeniors(const std::vector<std::string>& details)
    {
        int count = 0;

        for(auto detail : details)
        {
            std::string age = detail.substr(11, 2);

            if(std::stoi(age) > 60)
            {
                ++count;
            }
        }

        return count;
    }
};