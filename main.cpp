#include <iostream>
#include "factorial.h"

int main() {
  unsigned x;
  std::cout << "Enter number(>0) "; 
  std::cin >> x;
  std::cout << "Factorial of your entered number is: " <<  factorial(x) << std::endl;
  return 0;
}
