#include <algorithm>
#include <set>

class MySet {
public:
    explicit MySet(size_t modulo);

    friend MySet SetConcatenate(const MySet &a, const MySet &b);

    friend MySet SetUnion(const MySet &a, const MySet &b);

    [[nodiscard]] MySet SetKleeneStar() const;

    [[nodiscard]] std::set<size_t>::iterator begin() const;

    [[nodiscard]] std::set<size_t>::iterator end() const;

    void Insert(size_t t);

    [[nodiscard]] bool Contains(size_t x) const;

private:
    std::set<size_t> modulo_set_;
    size_t modulo_;
};