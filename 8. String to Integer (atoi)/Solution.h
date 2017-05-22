class Solution {
public:
    int myAtoi(std::string str) {
        if (str.empty())
            return 0;
        int sign = 0;
        bool begining = false;
        int result = 0;
        for (auto it = str.begin(); it != str.end(); ++it) {
            if (begining == false && sign == 0) {
                if (isblank(*it))
                    continue;
                else if (*it == '+') {
                    sign = 1;
                } else if (*it == '-') {
                    sign = -1;
                } else if (isdigit(*it)) {
                    sign = 1;
                    begining = true;
                    result += *it - '0';
                } else {
                    break;
                }
            } else {
                if (isdigit(*it)) {
                    begining = true;
                    if (result > std::numeric_limits<int>::max() / 10 ||
                        (result == std::numeric_limits<int>::max() / 10 && sign == 1 && *it - '0' > 7)
                        || (result == std::numeric_limits<int>::max() / 10 && sign == -1 && *it - '0' > 8)) {
                        return (sign > 0 ? std::numeric_limits<int>::max() : std::numeric_limits<int>::min());
                    } else
                        result = result * 10 + (*it - '0');
                } else {
                    break;
                }
            }
        }
        if (begining)
            return result * sign;
        else
            return 0;
    }
};