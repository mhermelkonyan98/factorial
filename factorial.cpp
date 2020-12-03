#include "factorial.h"
#include <iostream>
#include <exception>

typedef unsigned long long ull;

ull factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    if (a < 0 || a > 65) {
        throw std::invalid_argument("a must be greather than 0 and less than 66");
    }
    return a * factorial(a - 1);
}
