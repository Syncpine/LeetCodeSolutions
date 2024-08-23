class Solution {
public:
    int minOperations(const std::vector<std::string>& logs)
    {
        std::stack<std::string> st;

        for(auto log : logs)
        {
            if(log == "./")
            {
                ;
            }
            else if(log == "../")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(log);
            }
        }

        return st.size();
    }
};