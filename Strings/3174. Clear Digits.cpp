class Solution {
public:
    std::string clearDigits(const std::string& s)
    {
        std::stack<char> st;

        for(auto ch : s)
        {
            if('a' <= ch && ch <= 'z')
            {
                st.push(ch);
            }
            else
            {
                st.pop();
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
};