#include <iostream>

int main() {
    int a,b,c;
    std::cin >> a;
    for (int i = 1; i <= a; i++) {
        std::cin >> b >> c;
        std::cout << b + c << std::endl;
    }
    return 0;
}