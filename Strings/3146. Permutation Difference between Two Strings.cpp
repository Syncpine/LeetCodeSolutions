class Solution {
public:
    int findPermutationDifference(const std::string& s, const std::string& t)
    {
        int sum = 0;

        const int sLength = s.length();
        const int tLength = t.length();

        int ii = 0;
        int jj = 0;

        for(ii =  0; ii < sLength; ++ii)
        {
            for(jj = 0; jj < tLength; ++jj)
            {
                if(s[ii] == t[jj])
                {
                    sum += std::abs(ii - jj);
                }
            }
        }

        return sum;
    }
};