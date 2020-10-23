#include <algorithm>
#include <set>
class my_set {
public:
    explicit my_set(size_t modulo);

    friend my_set set_concatenate(const my_set& a, const my_set& b) ;

    friend my_set set_union(const my_set& a, const my_set& b) ;

    my_set set_kleene_star() const;

    std::set<size_t>::iterator begin() const;

    std::set<size_t>::iterator end() const;

    void insert(size_t t);

private:
    std::set<size_t> modulo_set_;
    size_t modulo_;
};