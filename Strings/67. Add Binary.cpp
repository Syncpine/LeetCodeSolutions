class Solution {
public:
    std::string addBinary(const std::string& a, const std::string& b)
    {
        std::string ret = "";

        int index1 = a.length() - 1;
        int index2 = b.length() - 1;

        bool flag = false;

        while(0 <= index1 && 0 <= index2)
        {
            if('0' == a[index1])
            {
                if('0' == b[index2])
                {
                    if(!flag)
                    {
                        ret = '0' + ret;
                        flag = false;
                    }
                    else
                    {
                        ret = '1' + ret;
                        flag = false;
                    }
                }
                else
                {
                    if(!flag)
                    {
                        ret = '1' + ret;
                        flag = false;
                    }
                    else
                    {
                        ret = '0' + ret;
                        flag = true;
                    }
                }
            }
            else
            {
                if('0' == b[index2])
                {
                    if(!flag)
                    {
                        ret = '1' + ret;
                        flag = false;
                    }
                    else
                    {
                        ret = '0' + ret;
                        flag = true;
                    }
                }
                else
                {
                    if(!flag)
                    {
                        ret = '0' + ret;
                        flag = true;
                    }
                    else
                    {
                        ret = '1' + ret;
                        flag = true;
                    }
                }
            }

            --index1;
            --index2;
        }

        while(0 <= index1)
        {
            if('0' == a[index1])
            {
                if(!flag)
                {
                    ret = '0' + ret;
                    flag = false;
                }
                else
                {
                    ret = '1' + ret;
                    flag = false;
                }
            }
            else
            {
                if(!flag)
                {
                    ret = '1' + ret;
                    flag = false;
                }
                else
                {
                    ret = '0' + ret;
                    flag = true;
                }
            }

            --index1;
        }

        while(0 <= index2)
        {
            if('0' == b[index2])
            {
                if(!flag)
                {
                    ret = '0' + ret;
                    flag = false;
                }
                else
                {
                    ret = '1' + ret;
                    flag = false;
                }
            }
            else
            {
                if(!flag)
                {
                    ret = '1' + ret;
                    flag = false;
                }
                else
                {
                    ret = '0' + ret;
                    flag = true;
                }
            }

            --index2;
        }

        if(flag)
        {
            ret = '1' + ret;
        }

        return ret;
    }
};