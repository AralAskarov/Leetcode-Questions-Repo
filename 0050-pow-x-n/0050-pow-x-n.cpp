class Solution {
public:
    double myPow(long double x, long long n) {
        if (n == 0) {
            return 1;
        }
        if (x == 1) {
            return 1;
        }
        if (x == -1) {
            return n % 2 == 0 ? 1 : -1;
        }
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        long double result = 1;
        while (n > 0) {
            if (n % 2 == 1) {
                result *= x;
            }
            x *= x;
            n /= 2;
        }
        return result;
    }
};
