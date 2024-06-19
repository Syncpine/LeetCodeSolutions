#include <stack>

class Solution {
public:
    bool isValid(const std::string& s)
    {
        std::stack<char> st;

        const auto strLength = s.length();
        auto index = 0;

        while(strLength > index)
        {
            if(')' == s[index])
            {
                if(st.empty())
                {
                    return false;
                }

                if('(' == st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(s[index]);
                }
            }
            else if(']' == s[index])
            {
                if(st.empty())
                {
                    return false;
                }

                if('[' == st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(s[index]);
                }
            }
            else if('}' == s[index])
            {
                if(st.empty())
                {
                    return false;
                }

                if('{' == st.top())
                {
                    st.pop();
                }
                else
                {
                    st.push(s[index]);
                }
            }
            else
            {
                st.push(s[index]);
            }

            ++index;
        }

        if(!st.empty())
        {
            return false;
        }

        return true;
    }
};