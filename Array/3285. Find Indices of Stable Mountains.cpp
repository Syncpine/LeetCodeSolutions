class Solution {
public:
    std::vector<int> stableMountains(const std::vector<int>& height, const int threshold)
    {
        const int heightSize = height.size();

        int index = 0;

        std::vector<int> ans;

        for(index = 1; index < heightSize; ++index)
        {
            if(height[index - 1] > threshold)
            {
                ans.push_back(index);
            }
        }

        return ans;
    }
};