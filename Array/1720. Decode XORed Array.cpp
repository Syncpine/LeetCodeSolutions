class Solution {
public:
    std::vector<int> decode(std::vector<int>& encoded, const int first)
    {
        encoded.insert(encoded.begin(), first);

        const int encodedSize = encoded.size();
        int index = 0;

        int last = first;

        for(index = 1; index < encodedSize; ++index)
        {
            int tmp = encoded[index];
            encoded[index] = last ^ encoded[index];
            last = tmp;
        }

        return encoded;
    }
};