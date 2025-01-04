#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int a,b,c;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        std::cin >> b >> c;
        std::cout << b + c << '\n';
    }
}