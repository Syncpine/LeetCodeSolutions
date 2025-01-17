#include <map>

class Solution {
public:
    bool canBeEqual(const std::vector<int>& target, const std::vector<int>& arr)
    {
        std::map<int, int> mapArr;

        const int arrSize = arr.size();
        int index = 0;

        for(index = 0; index < arrSize; ++index)
        {
            if(mapArr.end() == mapArr.find(arr[index]))
            {
                mapArr.insert( { arr[index], 1 } );
            }
            else
            {
                ++mapArr[arr[index]];
            }

            if(mapArr.end() == mapArr.find(target[index]))
            {
                mapArr.insert( { target[index], -1 } );
            }
            else
            {
                --mapArr[target[index]];
            }
        }

        std::cout << mapArr.size() << std::endl;

        for(auto item : mapArr)
        {
            if(item.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};