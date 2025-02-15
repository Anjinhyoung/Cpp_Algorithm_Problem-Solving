#include <iostream>

int main() {

    int num, start = 2;
    std::cin >> num;

    while (true) 
    {
        if (num % start == 0) 
        {
            std::cout << start << "\n";
            num /= start;
        }
        else 
        {
            start++;
        }

        if (start > num) break;
    }
}