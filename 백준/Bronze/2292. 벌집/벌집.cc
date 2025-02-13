#include <iostream>

int main() {
    int num, house = 1, mul = 1, count = 1;
    std::cin >> num;
    

    while (num > house) 
    {
        house += (6 * mul);
        mul++, count++;
    }

    std::cout << count++;
}