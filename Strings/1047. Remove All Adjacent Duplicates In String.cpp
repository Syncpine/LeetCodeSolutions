/*
 * Case1: 
 */

class Solution {
public:
    std::string removeDuplicates(const std::string& s)
    {
        std::string ret = "";
        int pos = -1;

        const int strLength = s.length();
        int index = 0;

        while(index < strLength)
        {
            if(ret == "")
            {
                ret += s[index];
                ++pos;
            }
            else
            {
                if(ret[pos] == s[index])
                {
                    ret.erase(pos);
                    --pos;
                }
                else
                {
                    ret += s[index];
                    ++pos;
                }
            }

            ++index;
        }

        return ret;
    }
};

/*
 * Case2: Use std::stack
 */

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