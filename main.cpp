#include <iostream>
#include "my_set.h"
int main() {
  my_set a(6);
  a.insert(3);
  auto res = a.set_kleene_star();
  for (size_t x : res){
    std::cout << x << " ";
  }

}
