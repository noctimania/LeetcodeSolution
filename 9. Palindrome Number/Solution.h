class Solution {
public:
    bool isPalindrome(int number) {
        if (number < 0)
            return false;
        if (number < 10)
            return true;
        int exponentiation = 1, number_tmp = number;
        while (number_tmp >= 10) {
            exponentiation *= 10;
            number_tmp /= 10;
        }
        while (number) {
            if (number / exponentiation == number % 10) {
                number %= exponentiation;
                number /= 10;
                exponentiation /= 100;
            } else {
                return false;
            }
        }
        return true;
    }
};