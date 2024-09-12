class Solution {
public:
    bool makeEqual(const std::vector<std::string>& words)
    {
        std::vector<int> vec(26, 0);

        for(auto word : words)
        {
            for(auto ch : word)
            {
                int index = ch - 'a';

                ++vec[index];
            }
        }

        const int vecSize = words.size();

        for(auto num : vec)
        {
            if(num % vecSize != 0)
            {
                return false;
            }
        }

        return true;
    }
};