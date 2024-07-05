class Solution {
public:
    std::string addStrings(const std::string& num1, const std::string& num2)
    {
        std::string ret = "";

        const int strLength1 = num1.length();
        const int strLength2 = num2.length();

        int index1 = num1.length() - 1;
        int index2 = num2.length() - 1;

        int cc = 0;

        while(0 <= index1 && 0 <= index2)
        {
            int tmp = (num1[index1] - '0') + (num2[index2] - '0') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            --index1;
            --index2;

            char ch = tmp + '0';
            ret = ch + ret;
        }

        while(0 <= index1)
        {
            int tmp = (num1[index1] - '0') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            --index1;

            char ch = tmp + '0';
            ret = ch + ret;
        }

        while(0 <= index2)
        {
            int tmp = (num2[index2] - '0') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            --index2;

            char ch = tmp + '0';
            ret = ch + ret;
        }

        if(1 == cc)
        {
            ret = '1' + ret;
        }

        return ret;
    }
};