#include <iostream>

int main() {

    int num, num2, count = 0, temp = 0;
    std::cin >> num >> num2;
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            count++;
            if (count == num2) temp = i;
        }
    }

    if (num2 <= count) std::cout << temp;
    else std::cout << 0;
}