#include <iostream>

int fuck() {
    std::ios::sync_with_stdio(false);    
    long long a, b;
    std::cin >> a >> b;
    std::cout << (a + 1) * a / 2 << std::endl << (b + 1) * b / 2;
    return 0;
}