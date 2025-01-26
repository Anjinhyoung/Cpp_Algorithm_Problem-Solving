#include <iostream>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    std::cin >> num;

    for (int i = 1; i <= num; i++) 
    {
        for (int i2 = num - 1; i2 >= i; i2--)  // 컴파일 오류가 안 난다.
        {
            std::cout << ' ';
        }

        for (int i3 = 1; i3 <= 2 * i - 1; i3++) 
        {
            std::cout << '*';
        }
        std::cout << "\n";
    }

    for (int i = 1; i <= num- 1; i++) 
    {
        for (int i2 = 1; i2 <= i; i2++) 
        {
            std::cout << ' ';
        }

        for (int i3 = 2 * (num - i) - 1; i3>= 1; i3--)
        {
            std::cout << '*';
        }

        std::cout << "\n";
    }
}