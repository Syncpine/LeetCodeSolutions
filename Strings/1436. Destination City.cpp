class Solution {
public:
    std::string destCity(const std::vector<std::vector<std::string>>& paths)
    {
        std::map<std::string, std::string> map_paths;

        for(auto path : paths)
        {
            map_paths[path[0]] = path[1];
        }

        auto itor = map_paths.begin();

        std::string target = itor->second;

        while(map_paths.end() != itor)
        {
            itor = map_paths.find(target);

            if(map_paths.end() != itor)
            {
                target = itor->second;
            }
        }

        return target;
    }
};