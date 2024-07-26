class Solution {
public:
    bool backspaceCompare(const std::string& s, const std::string& t)
    {
        int index_s = s.length() - 1;
        int index_t = t.length() - 1;

        int count_s = 0;
        int count_t = 0;

        while(index_s >= 0 || index_t >= 0)
        {
            func(s, index_s);
            func(t, index_t);

            if(index_s < 0 && index_t < 0)
            {
                return true;
            }

            if(index_s < 0 || index_t < 0)
            {
                return false;
            }

            std::cout << s[index_s] << " " << t[index_t] << std::endl;

            if(s[index_s] != t[index_t])
            {
                return false;
            }

            --index_s;
            --index_t;
        }

        return true;
    }

private:
    // 0 <- length() , 直到 str[index] != '#'
    void func(const std::string& str, int& index)
    {
        int count = 0;

        while(index >= 0 && str[index] == '#')
        {
            while(index >= 0 && str[index] == '#')
            {
                --index;
                ++count;
            }

            while(index >= 0 && str[index] != '#' && count > 0)
            {
                --index;
                --count;
            }
        }

        return;
    }
};