#include <iostream>

template<typename T>
T add(T base) {
  return base;
}

template<typename T, typename ... Args>
T add(T first, Args ... args) {
  std::cout << "You have " << sizeof...(args)
            << " arguments! (first = " << first << ")" << std::endl;
  return first + add(args...);
}

int main(int argc, char *argv[]) {
  int S = add(1, 2, 3, 4, 5.0);
  
  std::cout << S << std::endl;
  return 0;
}
