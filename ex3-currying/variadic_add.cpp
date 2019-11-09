#include <iostream>
#include <cstdarg>

// C99 Style
int variadic_add(int count, ...) {
  va_list args;
  va_start(args, count);
  int sum = 0;
  for (int i = 0; i < count; i++) {
    int value = va_arg(args, int);
    sum += value;
  }
  va_end(args);
  return sum;
}

int main(int argc, char *argv[]) {
  int S = variadic_add(5, 1, 2, 3, 4, 5);
  std::cout << S << std::endl;
  return 0;
}
