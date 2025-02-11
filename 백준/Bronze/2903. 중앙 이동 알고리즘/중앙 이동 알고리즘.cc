#include <iostream>
#include <cmath>

int main() {
    int num,  count = 2, count2 = 0;
    std::cin >> num;

    while (num != count2) 
    {
        count2++;
        count = count * 2 - 1;
    }

    std::cout << count * count;
}