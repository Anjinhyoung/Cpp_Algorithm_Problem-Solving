#include <iostream>
#include <vector>
#include <algorithm>

int main() {


    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int a, b;
    int basket[101] = {0,};

    std::cin >> a >> b;

    for (int i = 1; i <= 100; i++) 
    {
        basket[i] = i;
    }

    int c, d;

    for (int i = 1; i <= b; i++) 
    {
        std::cin >> c >> d;

        std::reverse(basket+c, basket+d+1);
    }

    for (int i = 1; i <= a; i++) 
    {
        std::cout << basket[i] << " ";
    }
}