#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int a;
    std::cin >> a;

    for (int i = 1; i <= a; i++) 
    {
        for (int j = a - i; j >= 1; j--) 
        {
            std::cout << ' ';
        }

        for(int k = 0; k <i; k++ )
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}