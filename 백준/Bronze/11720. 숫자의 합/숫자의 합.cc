#include <iostream>
#include <string>

int main() {

    int num, sum = 0;;
    std::cin >> num;


    for (int i = 0; i < num; i++) 
    {
        char a;
        std::cin >> a;
        sum += int(a) - 48;
    }

    std::cout << sum;

}