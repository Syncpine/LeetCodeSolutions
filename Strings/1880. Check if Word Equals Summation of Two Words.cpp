class Solution {
public:
    bool isSumEqual(const std::string& firstWord, const std::string& secondWord, const std::string& targetWord)
    {
        std::string sum = "";

        int index1 = firstWord.length() - 1;
        int index2 = secondWord.length() - 1;

        int cc = 0;

        while(index1 >= 0 && index2 >= 0)
        {
            int tmp = (firstWord[index1] - 'a') + (secondWord[index2] - 'a') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            sum = (char)(tmp + 'a') + sum;

            --index1;
            --index2;
        }

        std::cout << sum << std::endl;

        while(index1 >= 0 )
        {
            int tmp = (firstWord[index1] - 'a') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            sum = (char)(tmp + 'a') + sum;

            --index1;
        }

        std::cout << sum << std::endl;

        while(index2 >= 0)
        {
            int tmp = (secondWord[index2] - 'a') + cc;

            cc = tmp / 10;
            tmp = tmp % 10;

            sum = (char)(tmp + 'a') + sum;
            --index2;
        }

        std::cout << sum << std::endl;
        std::cout << cc << std::endl;

        if(cc != 0)
        {
            sum = "b" + sum;
        }

        const int strLength1 = targetWord.length();
        int index3 = 0;

        while(index3 < strLength1)
        {
            if(targetWord[index3] != 'a')
            {
                break;
            }

            ++index3;
        }

        std::string aid = targetWord.substr(index3);

        const int strLength2 = sum.length();
        int index4 = 0;

        while(index4 < strLength2)
        {
            if(sum[index4] != 'a')
            {
                break;
            }

            ++index4;
        }

        sum = sum.substr(index4);

        return aid == sum;
    }
};