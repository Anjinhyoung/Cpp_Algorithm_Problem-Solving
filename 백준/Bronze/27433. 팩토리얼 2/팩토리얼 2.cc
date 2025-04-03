#include <iostream>

long long factorial(long long num) 
{
    if (num == 0) return 1;

    return num * factorial(num - 1);
}

int main() {

    int num; std::cin >> num;

    std::cout << factorial(num);

}