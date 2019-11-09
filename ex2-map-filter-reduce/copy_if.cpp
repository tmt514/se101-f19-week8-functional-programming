/* 這隻程式只留下所有被 3 或 5 整除的數字。
*/
#include <algorithm>
#include <iostream>
#include <vector>

constexpr bool fizzbuzz(int x) {
  return x % 3 == 0 || x % 5 == 0;
}

int main(int argc, char *argv[]) {
  const std::vector<int> X = {1, 2, 3, 5, 9, 14, 123};
  std::vector<int> Y;
  
  // 把 X 的元素中被 3 或 5 整除的數字挑出來放到 Y。
  auto it = std::copy_if(X.begin(), X.end(), std::back_inserter(Y), &fizzbuzz);
  
  for (int i = 0; i < Y.size(); i++) {
    std::cout << "Y[" << i << "] = " << Y[i] << std::endl;
  }
  return 0;
}