#include <algorithm>

class my_set {
    explicit my_set(size_t k);

    friend my_set set_concatenate(const my_set& a, const my_set& b) ;

    friend my_set set_union(const my_set& a, const my_set& b) ;

    my_set set_kleene_star() const;
};