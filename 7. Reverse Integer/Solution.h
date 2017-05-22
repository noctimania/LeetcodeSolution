class Solution {
public:
    int reverse(int number) {
        auto reversed_number = 0;
        while (number) {
            if (reversed_number > std::numeric_limits<int>::max() / 10
                || reversed_number < std::numeric_limits<int>::min() / 10)
                return 0;
            reversed_number = reversed_number * 10 + number % 10;
            number = number / 10;
        }
        return reversed_number;
    }
};