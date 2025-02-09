#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int num, num2;
    std::cin >> num >> num2;

    std::string str = " ";

    if (num2 > 10) 
    {
        while (true) 
        {
            if (num % num2 >= 10)
            {
                // A: 65, a: 97
                str.append(1, char(num % num2 + 55));
            }
            else
            {
                str.append(std::to_string(num % num2));
            }
            num /= num2;
            if (num == 0) 
            {
                break;
            }
        }

        std::reverse(str.begin(), str.end());
    }

    else 
    {
        while (true)
        {
            str.append(std::to_string(num % num2));
            num /= num2;
            if (num == 0) 
            {
                break;
            }
        }
        std::reverse(str.begin(), str.end());
    }

    std::cout << str;
}