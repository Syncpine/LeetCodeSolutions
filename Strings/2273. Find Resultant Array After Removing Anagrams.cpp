class Solution {
public:
    std::vector<std::string> removeAnagrams(const std::vector<std::string>& words)
    {
        std::vector<std::string> vec;

        const int vecSize = words.size();

        int ii = 0;
        int jj = ii + 1;

        vec.push_back(words[ii]);

        while(jj < vecSize)
        {
            std::vector<char> vec_ch(26, 0);

            for(auto ch : words[ii])
            {
                ++vec_ch[ch - 'a'];
            }

            for(auto ch : words[jj])
            {
                --vec_ch[ch - 'a'];
            }

            bool flag = true;

            for(auto item : vec_ch)
            {
                if(0 != item)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                ++jj;
            }
            else
            {
                ii = jj;
                jj = ii + 1;
                vec.push_back(words[ii]);
            }
        }

        return vec;
    }
};