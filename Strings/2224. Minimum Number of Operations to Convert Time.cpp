class Solution {
public:
    int convertTime(const std::string& current, const std::string& correct)
    {
        int count = 0;

        unsigned int current_min = _ConvertMin(current);
        unsigned int correct_min = _ConvertMin(correct);

        return _GetOperatorCount(current_min, correct_min);
    }

private:
    unsigned int _ConvertMin(const std::string& hour_min_time)
    {
        unsigned int min_time = 0;

        min_time += (hour_min_time[0] - '0') * 10 * 60;
        min_time += (hour_min_time[1] - '0') * 60;

        min_time += (hour_min_time[3] - '0') * 10;
        min_time += (hour_min_time[4] - '0');

        return min_time;
    }

    unsigned int _GetOperatorCount(unsigned int cur_min, unsigned int target_min)
    {
        int count = 0;

        unsigned int tmp_min = target_min - cur_min;

        count += tmp_min / 60;
        tmp_min = tmp_min % 60;

        count += tmp_min / 15;
        tmp_min = tmp_min % 15;

        count += tmp_min / 5;
        tmp_min = tmp_min % 5;

        count += tmp_min / 1;

        return count;
    }
};