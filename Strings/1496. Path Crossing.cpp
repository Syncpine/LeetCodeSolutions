class Solution {
public:
    bool isPathCrossing(const std::string& path)
    {
        std::set<vector<int>> loacation;

        int xx = 0;
        int yy = 0;

        loacation.insert({ xx, yy });

        for(auto ch : path)
        {
            switch(ch)
            {
                case 'N':
                {
                    ++yy;
                } break;

                case 'S':
                {
                    --yy;
                } break;

                case 'E':
                {
                    ++xx;
                } break;

                case 'W':
                {
                    --xx;
                } break;
            }

            while(loacation.end() != loacation.find({ xx, yy }))
            {
                return true;
            }

            loacation.insert({ xx, yy });
        }

        return false;
    }
};