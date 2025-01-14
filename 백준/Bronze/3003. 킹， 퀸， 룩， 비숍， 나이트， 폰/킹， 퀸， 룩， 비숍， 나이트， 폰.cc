#include <iostream>

int main() 
{
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int chess[ ] = {1,1,2,2,2,8};
    int dong[6] = {0,};

    for (int i = 0; i < 6; i++) 
    {
        std::cin >> dong[i];
    }

    for (int i = 0; i < 6; i++) 
    {
        std::cout << chess[i] - dong[i] << " ";
    }
}