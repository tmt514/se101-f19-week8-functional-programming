/* 這隻程式計算所有數字的總和。
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

constexpr int add(int a, int b) {
  return a + b;
}

int main(int argc, char *argv[]) {
  const std::vector<int> X = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  std::cout << std::accumulate(X.begin(), X.end(), 0, &add) << std::endl;
  return 0;
}