class Solution {
public:
    std::vector<int> shortestToChar(const std::string& s, const char& c)
    {
        std::vector<int> vec_ch;

        const int strLength = s.length();
        int index = 0;

        std::vector<int> retVec(strLength, 0);

        while(index < strLength)
        {
            if(s[index] == c)
            {
                vec_ch.push_back(index);
            }

            ++index;
        }

        index = 0;

        const int vecSize = vec_ch.size();

        int start = 0;
        int end = 0;

        while(index < strLength)
        {
            if(index > vec_ch[end])
            {
                start = end;
                ++end;

                start = ((start < vecSize) ? start : (vecSize - 1));
                end = ((end < vecSize) ? end : (vecSize - 1));
            }

            int len1 = strLength;
            int len2 = strLength;

            if(start < vecSize)
            {
                len1 = abs(vec_ch[start] - index);
            }

            if(end < vecSize)
            {
                len2 = abs(vec_ch[end] - index);
            }

            int minLen = std::min(len1, len2);
            retVec[index] = minLen;

            ++index;
        }

        return retVec;
    }
};