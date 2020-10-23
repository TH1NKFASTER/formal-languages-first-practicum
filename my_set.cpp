#include "my_set.h"

my_set::my_set(size_t modulo) : modulo_(modulo) {

}


my_set set_concatenate(const my_set &a, const my_set &b) {
  my_set result = my_set(a.modulo_);
  for (auto &t : a.modulo_set_) {
    for (auto &h : b.modulo_set_) {
      result.insert(t + h);
    }
  }
  return result;
}

my_set set_union(const my_set &a, const my_set &b) {
  my_set result = a;
  for (auto &t : b) {
    result.insert(t);
  }
  return result;
}

my_set my_set::set_kleene_star() const {
  my_set result(modulo_);
  result.insert(0);
  size_t prev_size;
  do {
    prev_size = result.modulo_set_.size();
    my_set tmp(result.modulo_);
    for (auto &t : *this) {
      for (auto &h : result) {
        tmp.insert(t + h);
      }
    }
    result = set_union(result, tmp);
  } while (prev_size != result.modulo_set_.size());
  return result;
}

std::set<size_t>::iterator my_set::begin() const {
  return modulo_set_.begin();
}

std::set<size_t>::iterator my_set::end() const {
  return modulo_set_.end();
}

void my_set::insert(size_t t) {
  modulo_set_.insert(t % modulo_);
}



