class Solution {
public:
    int totalNumbers(const std::vector<int>& digits)
    {
        const int digitsSize = digits.size();

        int ii = 0;
        int jj = 0;
        int kk = 0;

        std::set<int> setDigit;

        for(kk = 0; kk < digitsSize; ++kk)
        {
            if(digits[kk] % 2 == 0)
            {
                for(ii = 0; ii < digitsSize; ++ii)
                {
                    if(ii != kk && digits[ii] != 0)
                    {
                        for(jj = 0; jj < digitsSize; ++jj)
                        {
                            if(jj != ii && jj != kk)
                            {
                                int value = digits[ii] * 100 + digits[jj] * 10 + digits[kk];

                                if(setDigit.end() == setDigit.find(value))
                                {
                                    setDigit.insert(value);
                                }
                            }
                        }
                    }
                }
            }
        }

        return setDigit.size();
    }
};