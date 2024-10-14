class Solution {
public:
    std::string digitSum(std::string& s, const int& k)
    {
        std::cout << s << std::endl;
        const int strLength = s.length();

        if(strLength <= k)
        {
            return s;
        }

        std::string str = "";

        int sum = 0;

        int index = 0;
        int index_k = 0;

        while(index < strLength)
        {
            if(index_k >= k)
            {
                str += std::to_string(sum);

                index_k = 0;
                sum = 0;
            }

            sum += (s[index] - '0');

            ++index;
            ++index_k;
        }

        str += std::to_string(sum);

        return digitSum(str, k);
    }
};