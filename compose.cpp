template <typename F, typename G, typename Ret, typename... X>
class Composed {
    F f;
    G g;

    public:
    Composed(F f, G g) {
        this->f = f;
        this->g = g;
    }

    Ret operator()(X... xs) {
        return this->f(this->g(xs...));
    }
};

#include <iostream>
#include <cmath>

int main(int argc, char **argv) {
    // unfortunately required explicit template argument specification
    // a more powerful type system would not require this
    Composed<double (*)(double), double (*)(double), double, double> c(sqrt, cbrt);
    std::cout << c(1);
}
