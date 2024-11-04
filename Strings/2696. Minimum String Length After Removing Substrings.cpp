#include <stack>

class Solution {
public:
    int minLength(const std::string& s)
    {
        std::stack<char> st;

        for(auto ch : s)
        {
            std::cout << st.size() << std::endl;

            if(st.empty())
            {
                st.push(ch);
            }
            else
            {
                if('A' == ch || 'C' == ch)
                {
                    st.push(ch);
                }
                else if('B' == ch && 'A' == st.top())
                {
                    st.pop();
                }
                else if('D' == ch && 'C' == st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
        }

        return st.size();
    }
};