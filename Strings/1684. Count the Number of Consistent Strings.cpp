class Solution {
public:
    int countConsistentStrings(const std::string& allowed, const std::vector<std::string>& words)
    {
        std::vector<int> vec(26, 0);

        for(auto ch : allowed)
        {
            vec[ch - 'a'] = 1;
        }

        int count = 0;

        for(auto word : words)
        {
            bool flag = true;

            for(auto ch : word)
            {
                if(vec[ch - 'a'] == 0)
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
            {
                ++count;
            }
        }

        return count;
    }
};