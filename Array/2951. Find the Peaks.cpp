class Solution {
public:
    std::vector<int> findPeaks(const std::vector<int>& mountain)
    {
        const int mountainSize = mountain.size();

        int index = 0;

        std::vector<int> ans;

        for(index = 1; index < mountainSize - 1; ++index)
        {
            if(mountain[index - 1] < mountain[index] && mountain[index] > mountain[index + 1])
            {
                ans.push_back(index);
            }
        }

        return ans;
    }
};