class Solution {
public:
    int numUniqueEmails(const std::vector<std::string>& emails)
    {
        std::set<std::string> setEmail;

        for(auto email : emails)
        {
            std::string realEmail = "";

            const int pos = email.find('@');

            int index = 0;

            while(index < pos)
            {
                if(email[index] == '+')
                {
                    break;
                }

                if(email[index] != '.')
                {
                    realEmail += email[index];
                }

                ++index;
            }

            realEmail += email.substr(pos);

            setEmail.insert(realEmail);
        }

        return setEmail.size();
    }
};