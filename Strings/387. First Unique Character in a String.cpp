class Solution {
public:
    int firstUniqChar(const std::string& s)
    {
        std::vector<char> vec_ch;
        std::vector<std::vector<int>> vec_index;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            int jj = 0;
            for(jj = 0; jj < vec_ch.size(); ++jj)
            {
                if(s[index] == vec_ch[jj])
                {
                    vec_index[jj].emplace_back(index);
                    break;
                }
            }

            if(jj == vec_ch.size())
            {
                vec_ch.emplace_back(s[index]);
                vec_index.push_back( { index } );
            }

            ++index;
        }

        for(int jj = 0; jj < vec_ch.size(); ++jj)
        {
            if(1 == vec_index[jj].size())
            {
                return vec_index[jj][0];
            }
        }

        return -1;
    }
};