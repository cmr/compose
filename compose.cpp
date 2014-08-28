#include <iostream>
#include <cmath>

#include "compose.h"

int main(int argc, char **argv) {
    // unfortunately required explicit template argument specification
    // a more powerful type system would not require this
    Composed<double (*)(double), double (*)(double), double, double> c(sqrt, cbrt);
    std::cout << c(1);
}
