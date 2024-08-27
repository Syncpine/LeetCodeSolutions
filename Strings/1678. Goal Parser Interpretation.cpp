class Solution {
public:
    std::string interpret(const std::string& command)
    {
        std::string retStr = "";

        const int strLength = command.length();
        int index = 0;

        while(index < strLength)
        {
            if(command[index] == 'G')
            {
                retStr += 'G';
            }
            else if(command[index] == '(')
            {
                if(command[index + 1] == ')')
                {
                    retStr += 'o';
                    ++index;
                }
                else if(command[index + 1] == 'a')
                {
                    retStr += "al";
                    index += 3;
                }
            }

            ++index;
        }

        return retStr;
    }
};