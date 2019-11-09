#include <iostream>

constexpr int add(int a, int b) { return a + b; };

int main(int argc, char *argv[]) {
    int a = argc > 1 ? atoi(argv[1]) : 0;
    int b = argc > 2 ? atoi(argv[2]) : 0;
    std::cout << add(a, b) << std::endl;
    return 0;
}