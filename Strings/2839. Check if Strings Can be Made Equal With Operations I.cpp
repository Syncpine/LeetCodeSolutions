class Solution {
public:
    bool canBeEqual(const std::string& s1, const std::string& s2)
    {
        return Check(s1[0], s1[2], s2[0], s2[2])
            && Check(s1[1], s1[3], s2[1], s2[3]);
    }

private:
    bool Check(char s1_a, char s1_b, char s2_a, char s2_b)
    {
        return (s1_a == s2_a && s1_b == s2_b)
            || (s1_a == s2_b && s1_b == s2_a);
    }
};