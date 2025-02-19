#include <iostream>

int main() {

    int num, num2, num3;




    while (true)
    {
        std::cin >> num >> num2 >> num3;

        if (num == 0 && num2 == 0 && num3 == 0) break;

        if (num == num2 && num2 == num3)
        {
            std::cout << "Equilateral" << "\n";
        }
        else if (num + num2 > num3 && num + num3 > num2 && num2 + num3 > num)
        {
            // 삼각형 조건 통과
            if (num == num2 || num == num3 || num2 == num3)
            {
                std::cout << "Isosceles" << "\n";
            }
            else
            {
                std::cout << "Scalene" << "\n";
            }
        }
        else
        {
            std::cout << "Invalid" << "\n";
        }
    }
}