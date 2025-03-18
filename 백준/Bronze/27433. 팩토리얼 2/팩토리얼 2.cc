#include <iostream>

long long factorial(long long num) 
{
    if (num == 1) return num;

    return num * factorial(num - 1);
}


int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    long long num;
    std::cin >> num;
    if (num == 0) 
    {
        std::cout << 1;
        return 0;
    }
   
    std::cout << factorial(num);
}