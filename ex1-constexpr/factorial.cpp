#include <iostream>

// C++11 要求 constexpr 函式必須只能有單一 return 敘述。
// 但從 C++14 開始就沒這個限制了！
constexpr int factorial(int N) {
    if (N <= 1) return 1;
    return factorial(N - 1) * N;
};

// 這個在編譯的時候就可以順手優化，直接把值算出來。
constexpr int f10 = factorial(10);

int main(int argc, char *argv[]) {
  std::cout << f10 << std::endl;
  return 0;
}