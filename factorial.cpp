#include "factorial.h"

unsigned factorial(unsigned n) {
  if (n == 1 || n == 0) {
    return n;
  }
  return n * factorial(n - 1);
}

