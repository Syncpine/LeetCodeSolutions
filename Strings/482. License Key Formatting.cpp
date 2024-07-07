// class Solution {
// public:
//     std::string licenseKeyFormatting(const std::string& s, const int& k)
//     {
//         std::string ret = "";

//         int index1 = s.length() - 1;
//         int index2 = 0;

//         while(0 <= index1)
//         {
//             if(k <= index2)
//             {
//                 ret = '-' + ret;
//                 index2 = 0;
//             }

//             if('-' != s[index1])
//             {
//                 ret = (char)std::toupper(s[index1]) + ret;
//                 ++index2;
//             }

//             --index1;
//         }

//         if('-' == ret[0])
//         {
//             ret = ret.substr(1);
//         }

//         return ret;
//     }
// };

class Solution {
public:
    std::string licenseKeyFormatting(const std::string& s, const int& k)
    {
        std::string ret = "";

        int index1 = s.length() - 1;
        int index2 = 0;

        while(0 <= index1)
        {
            if(k <= index2)
            {
                ret += '-';
                index2 = 0;
            }

            if('-' != s[index1])
            {
                ret += (char)std::toupper(s[index1]);
                ++index2;
            }

            --index1;
        }

        int start = 0;
        int end = ret.length() - 1;

        while(start < end)
        {
            std::swap(ret[start], ret[end]);
            ++start;
            --end;
        }

        if('-' == ret[0])
        {
            ret = ret.substr(1);
        }

        return ret;
    }
};