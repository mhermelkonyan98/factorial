#include <iostream>
#include <exception>
#include "factorial.h"

typedef unsigned long long ull ;

int main() {
    try {
        int n;
        std::cin >> n;
        std::cout << factorial(n) << std::endl;
    }  catch (std::invalid_argument& ex) {
        std::cerr << ex.what() << std::endl;
    }
    return 0;
}
