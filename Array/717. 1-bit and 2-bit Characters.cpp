class Solution {
public:
    bool isOneBitCharacter(const std::vector<int>& bits)
    {
        const int bitsSize = bits.size();
        int index = 0;

        while(index < bitsSize - 1)
        {
            if(bits[index] == 0)
            {
                ++index;
            }
            else
            {
                index += 2;
            }
        }

        if(index == bitsSize - 1)
        {
            if(bits[index] == 0)
            {
                return true;
            }
        }

        return false;
    }
};