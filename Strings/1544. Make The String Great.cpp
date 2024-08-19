#include <stack>


class Solution {
public:
    std::string makeGood(const std::string& s)
    {
        std::stack<char> st;

        for(auto ch : s)
        {
            if(st.empty())
            {
                st.push(ch);
            }
            else
            {
                auto cc = st.top();

                if(IsLower(ch))
                {
                    if(ch == cc + ('a' - 'A'))
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
                else if(IsUpper(ch))
                {
                    if(ch == cc - ('a' - 'A'))
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
            }
        }

        std::string retStr = "";

        while(!st.empty())
        {
            retStr = st.top() + retStr;
            st.pop();
        }

        return retStr;
    }

private:
    bool IsLower(char ch)
    {
        return ('a' <= ch) && (ch <= 'z');
    }

    bool IsUpper(char ch)
    {
        return ('A' <= ch) && (ch <= 'Z');
    }
};