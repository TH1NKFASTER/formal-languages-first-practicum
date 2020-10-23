#include "MySet.h"

MySet::MySet(size_t modulo) : modulo_(modulo) {

}


MySet SetConcatenate(const MySet &a, const MySet &b) {
  MySet result = MySet(a.modulo_);
  for (auto &t : a.modulo_set_) {
    for (auto &h : b.modulo_set_) {
      result.Insert(t + h);
    }
  }
  return result;
}

MySet SetUnion(const MySet &a, const MySet &b) {
  MySet result = a;
  for (auto &t : b) {
    result.Insert(t);
  }
  return result;
}

MySet MySet::SetKleeneStar() const {
  MySet result(modulo_);
  result.Insert(0);
  size_t prev_size;
  do {
    prev_size = result.modulo_set_.size();
    MySet tmp(result.modulo_);
    for (auto &t : *this) {
      for (auto &h : result) {
        tmp.Insert(t + h);
      }
    }
    result = SetUnion(result, tmp);
  } while (prev_size != result.modulo_set_.size());
  return result;
}

std::set<size_t>::iterator MySet::begin() const {
  return modulo_set_.begin();
}

std::set<size_t>::iterator MySet::end() const {
  return modulo_set_.end();
}

void MySet::Insert(size_t t) {
  modulo_set_.insert(t % modulo_);
}



