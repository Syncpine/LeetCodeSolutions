class Solution {
public:
    bool isAlienSorted(const std::vector<std::string>& words, const std::string& order)
    {
        std::map<char, int> mapOrder;

        int index = 0;

        for(auto ch : order)
        {
            mapOrder.insert( { ch, index } );
            ++index;
        }

        const int vecWordSize = words.size();

        int ii = 0;
        int jj = 0;

        for(ii = 0; ii < vecWordSize - 1; ++ii)
        {
            const int strLength1 = words[ii].length();
            const int strLength2 = words[ii + 1].length();

            for(jj = 0; jj < strLength1 && jj < strLength2; ++jj)
            {
                char ch1 = words[ii][jj];
                char ch2 = words[ii + 1][jj];

                int pos1 = mapOrder[ch1];
                int pos2 = mapOrder[ch2];

                if(pos1 < pos2)
                {
                    break;
                }
                else if(pos1 == pos2)
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }

            if(jj < strLength1 && jj >= strLength2)
            {
                return false;
            }
        }

        return true;
    }
};