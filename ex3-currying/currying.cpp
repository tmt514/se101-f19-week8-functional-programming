#include <algorithm>
#include <iostream>
#include <functional>
#include <cstdarg>

template<typename Func, typename T>
auto curry(Func f, T second) {
  return [=](T first) -> T {
    return f(first, second);
  };
}

template<typename Func, typename T, typename ... Args>
auto curry(Func f, T first, Args ... args) {
  return [=](auto last) {
    return f(curry(f, args...)(first), last);
  };
}

int main(int argc, char *argv[]) {
  auto add = [](int a, int b) -> int {
    return a + b;
  };
  
  auto curried_add = curry(add, 1, 2, 3, 4, 5, 6, 7, 8, 9);
  
  int S = curried_add(10);
  
  std::cout << S << std::endl;
  return 0;
}
