#include <iostream>

int maxOfThree(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main() {
    std::cout << maxOfThree(10, 25, 7) << std::endl; // 25
    return 0;
}