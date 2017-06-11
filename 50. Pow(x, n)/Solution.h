//
// Created by anjouker on 17-6-4.
//

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        if (n < 0){
            x=1/x;
            n=-n;
        }
        double product = 1.0;
        while (n != 0) {
            if (n & 0x1)
                product *= x;
            x = x * x;
            n >>= 1;
        }
        return product;
    }
};
