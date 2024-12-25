class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image)
    {
        const int n = image.size();

        int ii = 0;

        for(ii = 0; ii < n; ++ii)
        {
            int start = 0;
            int end = n - 1;

            while(start <= end)
            {
                int num1 = (image[ii][end] == 0) ? 1 : 0;
                int num2 = (image[ii][start] == 0) ? 1 : 0;

                image[ii][start] = num1;
                image[ii][end] = num2;

                ++start;
                --end;
            }
        }

        return image;
    }
};