class Solution {
public:
    bool checkRecord(const std::string& s)
    {
        int countA = 0;
        int countL = 0;

        for(auto ch : s)
        {
            switch(ch)
            {
                case 'A':
                {
                    ++countA;
                    countL = 0;
                }  break;

                case 'L':
                {
                    ++countL;
                } break;

                case 'P':
                {
                    countL = 0;
                } break;
            }

            if(countA >= 2)
            {
                return false;
            }

            if(countL >= 3)
            {
                return false;
            }
        }

        return true;
    }
};