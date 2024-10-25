class Solution {
public:
    std::string decodeMessage(const std::string& key, const std::string& message)
    {
        std::map<char, char> keySet;

        const int keyLength = key.length();
        int index = 0;
        int count = 0;

        while(index < keyLength)
        {
            if(' ' == key[index])
            {
                ++index;
                continue;
            }

            auto itor = keySet.find(key[index]);

            if(keySet.end() == itor)
            {
                keySet.insert({ key[index], (char)('a' + count) });
                ++count;
            }

            ++index;
        }

        std::string retStr = "";

        for(auto ch : message)
        {
            retStr += (' ' == ch) ? ' ' : keySet[ch];
        }

        return retStr;
    }
};