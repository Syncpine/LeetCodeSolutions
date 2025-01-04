class Solution {
public:
    std::vector<int> addToArrayForm(std::vector<int>& num, const int k)
    {
        std::vector<int> num_k = IntToVec(k);

        int index = num.size() - 1;
        int index_k = num_k.size() - 1;

        int cc = 0;

        if(index >= index_k)
        {
            while(index_k >= 0)
            {
                int tmp = num[index] + num_k[index_k] + cc;

                num[index] = tmp % 10;
                cc = tmp / 10;

                --index;
                --index_k;
            }

            while(index >= 0)
            {
                int tmp = num[index] + cc;

                num[index] = tmp % 10;
                cc = tmp / 10;

                --index;
            }

            if(cc == 1)
            {
                num.insert(num.begin(), cc);
            }

            return num;
        }
        else
        {
            while(index >= 0)
            {
                int tmp = num[index] + num_k[index_k] + cc;

                num_k[index_k] = tmp % 10;
                cc = tmp / 10;

                --index;
                --index_k;
            }

            while(index_k >= 0)
            {
                int tmp = num_k[index_k] + cc;

                num_k[index_k] = tmp % 10;
                cc = tmp / 10;

                --index_k;
            }

            if(cc == 1)
            {
                num_k.insert(num_k.begin(), cc);
            }

            return num_k;
        }
    }

private:
    std::vector<int> IntToVec(int value)
    {
        std::vector<int> vec;

        while(value > 0)
        {
            vec.insert(vec.begin(), value % 10);
            value /= 10;
        }

        return vec;
    }
};