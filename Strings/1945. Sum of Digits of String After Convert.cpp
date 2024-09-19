class Solution {
public:
    int getLucky(const std::string& s, int k)
    {
        int sum = 0;

        for(auto ch : s)
        {
            int ans = ch - 'a' + 1;

            sum += (ans % 10) + (ans / 10);
        }

        --k;

        return func(sum, k);
    }

private:
    int func(int num, int k)
    {
        if(k == 0)
        {
            return num;
        }

        int sum = 0;

        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        --k;

        return func(sum, k);
    }
};