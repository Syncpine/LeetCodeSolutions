/*
 * Case1: Use std::set<>
 */

#include <set>

class Solution {
public:
    std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        std::set<int> set1, set2;
        std::vector<int> retVec;

        for(auto num : nums1)
        {
            set1.insert(num);
        }

        for(auto num : nums2)
        {
            if(set1.count(num))
            {
                set2.insert(num);
            }
        }

        for(auto num : set2)
        {
            retVec.push_back(num);
        }

        return retVec;
    }
};

/*
 * Case2: Use std::vector<>
 */

class Solution {
public:
    std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2)
    {
        std::vector<int> numVec(_NumCount, 0);
        std::vector<int> retVec;

        for(auto num : nums1)
        {
            numVec[num] = 1;
        }

        for(auto num : nums2)
        {
            if(1 == numVec[num])
            {
                numVec[num] = 2;
            }
        }

        for(int index = 0; index < _NumCount; ++index)
        {
            if(2 == numVec[index])
            {
                retVec.push_back(index);
            }
        }

        return retVec;
    }

private:
    const static auto _NumCount = 1001;
};