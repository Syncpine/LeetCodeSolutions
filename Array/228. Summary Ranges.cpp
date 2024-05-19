class Solution {
public:
    std::vector<std::string> summaryRanges(const std::vector<int>& nums)
    {
        if(nums.empty())
        {
            return { };
        }

        std::vector<std::string> strVec;
        std::string str = std::to_string(nums[0]);

        const auto vecSize = nums.size();
        auto curNumInStr = nums[0];
        int numCountInStr = 1;

        for(int ii = 1; ii < vecSize; ++ii)
        {
            if(curNumInStr + 1 != nums[ii])
            {
                if(1 < numCountInStr)
                {
                    str += "->" + std::to_string(curNumInStr);
                }

                strVec.push_back(str);

                str = std::to_string(nums[ii]);
                numCountInStr = 0;
            }

            curNumInStr = nums[ii];
            ++numCountInStr;
        }

        if(!str.empty())
        {
            if(1 < numCountInStr)
            {
                str += "->" + std::to_string(curNumInStr);
            }

            strVec.push_back(str);
        }

        return strVec;
    }
};