class Solution {
public:
    void reverseString(std::vector<char>& s)
    {
        int index1 = 0;
        int index2 = s.size() - 1;

        while(index1 < index2)
        {
            std::swap(s[index1], s[index2]);

            ++index1;
            --index2;
        }
    }
};