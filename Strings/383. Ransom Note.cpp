class Solution {
public:
    bool canConstruct(const std::string& ransomNote, const std::string& magazine)
    {
        if(ransomNote.length() > magazine.length())
        {
            return false;
        }

        std::map<char, int> set;

        const int strLength = magazine.length();
        int index = 0;

        while(index < strLength)
        {
            if(set.count(magazine[index]) > 0)
            {
                ++set[magazine[index]];
            }
            else
            {
                set[magazine[index]] = 1;
            }

            ++index;
        }

        const int strLength2 = ransomNote.length();
        index = 0;

        while(index < strLength2)
        {
            if(set.count(ransomNote[index]) > 0)
            {
                --set[ransomNote[index]];

                if(set[ransomNote[index]] < 0)
                {
                    return false;
                }
            }
            else
            {
                return false;
            }

            ++index;
        }

        return true;
    }
};