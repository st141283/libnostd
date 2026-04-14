#include <cmath>

namespace math {
    double square(double num) {
        return num * num;
    }

    double fastpow(double base, unsigned long long exp) {
        double x = 1.0;
        while (exp != 0) {
            if ((exp & 1ULL) == 1) { x *= base; }
            base *= base;
            exp >>= 1;
        }
        return x;
    }
}
