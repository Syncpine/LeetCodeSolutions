class Solution {
public:
    int romanToInt(const string& s)
    {
        int sum = 0;

        auto index = 0;
        const auto strLength = s.length();

        for(auto index = 0; index < strLength; ++index)
        {
            switch(s[index])
            {
                case 'I':
                {
                    if(index + 1 < strLength)
                    {
                        if('V' == s[index + 1])
                        {
                            sum += 4;
                            ++index;
                            break;
                        }
                        else if('X' == s[index + 1])
                        {
                            sum += 9;
                            ++index;
                            break;
                        }
                    }

                    sum += 1;
                } break;

                case 'V':
                {
                    sum += 5;
                } break;

                case 'X':
                {
                    if(index + 1 < strLength)
                    {
                        if('L' == s[index + 1])
                        {
                            sum += 40;
                            ++index;
                            break;
                        }
                        else if('C' == s[index + 1])
                        {
                            sum += 90;
                            ++index;
                            break;
                        }
                    }

                    sum += 10;
                } break;

                case 'L':
                {
                    sum += 50;
                } break;

                case 'C':
                {
                    if(index + 1 < strLength)
                    {
                        if('D' == s[index + 1])
                        {
                            sum += 400;
                            ++index;
                            break;
                        }
                        else if('M' == s[index + 1])
                        {
                            sum += 900;
                            ++index;
                            break;
                        }
                    }

                    sum += 100;
                } break;

                case 'D':
                {
                    sum += 500;
                } break;

                case 'M':
                {
                    sum += 1000;
                } break;
            }
        }

        return sum;
    }
};