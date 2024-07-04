class Solution {
public:
    std::vector<std::string> fizzBuzz(const int& n)
    {
        std::vector<std::string> vecStr;

        int index = 0;
        while(index < n)
        {
            ++index;

            if(0 == index % 3)
            {
                if(0 == index % 5)
                {
                    vecStr.push_back("FizzBuzz");
                    continue;
                }

                vecStr.push_back("Fizz");
                continue;
            }

            if(0 == index % 5)
            {
                vecStr.push_back("Buzz");
                continue;
            }

            vecStr.push_back(std::to_string(index));
        }

        return vecStr;
    }
};