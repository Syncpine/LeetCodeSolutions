class Solution {
public:
    bool isLongPressedName(const std::string& name, const std::string& typed)
    {
        const int strLength1 = name.length();
        const int strLength2 = typed.length();

        int index1 = 0;
        int index2 = 0;

        char ch = name[0];

        while(index1 < strLength1 && index2 < strLength2)
        {
            if(name[index1] == typed[index2])
            {
                ch = name[index1];

                ++index1;
                ++index2;
            }
            else
            {
                if(ch == typed[index2])
                {
                    ++index2;
                }
                else
                {
                    return false;
                }
            }
        }

        if(index1 < strLength1)
        {
            return false;
        }

        while(index2 < strLength2)
        {
            if(ch != typed[index2])
            {
                return false;
            }

            ++index2;
        }

        return true;
    }
};