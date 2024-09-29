class Solution {
public:
    std::string kthDistinct(const std::vector<std::string>& arr, int k)
    {
        std::map<std::string, int> set;

        for(auto str : arr)
        {
            if(set.end() != set.find(str))
            {
                ++set[str];
            }
            else
            {
                set.insert({str, 1});
            }
        }

        for(auto str : arr)
        {
            if(1 == set[str])
            {
                --k;
            }

            if(0 == k)
            {
                return str;
            }
        }

        return "";
    }
};