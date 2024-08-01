class Solution {
public:
    std::string removeDuplicates(const std::string& s)
    {
        std::string ret = "";

        std::stack<char> st;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if(st.empty())
            {
                st.push(s[index]);
            }
            else
            {
                if(st.top() == s[index])
                {
                    st.pop();
                }
                else
                {
                    st.push(s[index]);
                }
            }

            ++index;
        }

        while(!st.empty())
        {
            ret = st.top() + ret;
            st.pop();
        }

        return ret;
    }
};