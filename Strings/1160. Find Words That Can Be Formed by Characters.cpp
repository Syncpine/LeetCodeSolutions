class Solution {
public:
    int countCharacters(std::vector<std::string>& words, std::string chars)
    {
        int sumLen = 0;

        std::vector<int> vecChar(26, 0);

        for(auto ch : chars)
        {
            ++vecChar[ch - 'a'];
        }

        for(auto word : words)
        {
            bool flag = true;
            std::vector<int> vec = vecChar;

            for(auto ch : word)
            {
                int index = ch - 'a';
                --vec[index];

                if(vec[index] < 0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                sumLen += word.length();
            }
        }

        return sumLen;
    }
};