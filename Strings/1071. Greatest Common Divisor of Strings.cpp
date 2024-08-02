class Solution {
public:
    std::string gcdOfStrings(const std::string& str1, const std::string& str2)
    {
        const int strLength1 = str1.length();
        const int strLength2 = str2.length();

        int gcdStrLength = gcd(strLength1, strLength2);
        int lcmStrLength = lcm(strLength1, strLength2);

        std::string gcdStr = str1.substr(0, gcdStrLength);

        if(IsSubstr(str1, gcdStr) && IsSubstr(str2, gcdStr))
        {
            return gcdStr;
        }

        std::string lcmStr = "";
        int cc = lcmStrLength / strLength1;

        while(cc--)
        {
            lcmStr += str1;
        }

        if(IsSubstr(lcmStr, str1) && IsSubstr(lcmStr, str2))
        {
            return lcmStr;
        }

        return "";
    }

private:
    // 最大公约数
    int gcd(int a, int b)
    {
        if (a % b == 0)
        {
            return b;
        }

        return gcd(b, a % b);
    }

    // 最小公倍数
    int lcm(int a, int b)
    {
        int temp = a * b;
        temp = temp / gcd(a, b);
        return temp;
    }

    bool IsSubstr(const std::string& str1, const std::string& str2)
    {
        const int strLength1 = str1.length();
        const int strLength2 = str2.length();

        int index1 = 0;
        int index2 = 0;

        while(index1 < strLength1)
        {
            if(str1[index1] != str2[index2])
            {
                return false;
            }

            ++index1;
            ++index2;

            if(index2 >= strLength2)
            {
                index2 = 0;
            }
        }

        return true;
    }
};