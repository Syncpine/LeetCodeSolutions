class Solution {
public:
    int minimumPushes(const std::string& word)
    {
        int nums = word.length();

        int count = 0;

        if(nums >= 8)
        {
            count += 8;
            nums -= 8;

            if(nums >= 8)
            {
                count += 8 * 2;
                nums -= 8;

                if(nums >= 8)
                {
                    count += 8 * 3;
                    nums -= 8;

                    count += nums * 4;
                }
                else
                {
                    count += nums * 3;
                }
            }
            else
            {
                count += nums * 2;
            }
        }
        else
        {
            count += nums;
        }

        return count;
    }
};