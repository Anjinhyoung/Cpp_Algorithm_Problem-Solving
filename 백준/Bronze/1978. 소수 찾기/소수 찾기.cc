#include <iostream>

int main() {
    int num, num2, count = 0;
    std::cin >> num;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        if (num2 == 1) continue;

        int count2 = 0;
        if (num2 == 2) 
        {
            count++;
            continue;
        }

        for (int i = 2; i < num2; i++) 
        {
            if (num2 % i == 0) 
            {
                count2++;
                break;
            }
        }

        if (count2 == 0) count++;
    }
    std::cout << count;
}