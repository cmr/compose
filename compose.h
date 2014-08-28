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

