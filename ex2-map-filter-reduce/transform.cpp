/* 這隻程式把所有數字通通平方。
*/
#include <algorithm>
#include <iostream>

constexpr int square(int x) { return x * x; }

int main(int argc, char *argv[]) {
  const int N = 7;
  const int X[] = {1, 2, 3, 5, 9, 14, 123};
  int *Y = new int[N];
  
  // 把 X 的元素逐一應用至 square 函數，並將結果儲存在 Y 陣列。
  std::transform(X, X+N, Y, &square);
  
  for (int i = 0; i < N; i++) {
    std::cout << "Y[" << i << "] = " << Y[i] << std::endl;
  }
  return 0;
}