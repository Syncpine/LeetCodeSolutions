class Solution {
public:
    bool lemonadeChange(const std::vector<int>& bills)
    {
        std::map<int, int> m_Count;

        m_Count.insert( { 5, 0 } );
        m_Count.insert( { 10, 0 } );
        m_Count.insert( { 20, 0 } );

        for(auto bill : bills)
        {
            int cur = bill - 5;

            if(cur == 15)
            {
                if(m_Count[10] >= 1)
                {
                    --m_Count[10];
                    cur -= 10;
                }
                else
                {
                    if(m_Count[5] >= 2)
                    {
                        m_Count[5] -= 2;
                        cur -= 10;
                    }
                    else
                    {
                        return false;
                    }
                }
            }

            if(cur == 5)
            {
                if(m_Count[5] >= 1)
                {
                    --m_Count[5];
                    cur -= 5;
                }
                else
                {
                    return false;
                }
            }

            ++m_Count[bill];
        }

        return true;
    }
};