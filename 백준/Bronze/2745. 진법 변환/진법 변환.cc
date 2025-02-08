#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>


int main() {
    std::string str, str_sub = " ", str_num = " ";
    std::getline(std::cin, str);
    int num = 0, num2 = 0, sum = 0;

    for (char& ch : str) 
    {
        if (ch == ' ') 
        {
            break;
        }
        num += 1;
    }
    // num 숫자가 빈칸

    // N
    str_sub = str.substr(0, num);
    std::reverse(str_sub.begin(), str_sub.end());
    str_num = str.substr(num +1);

    num2 = std::stoi(str_num);

    // A : 65, a: 97

    
    for (int i = 0; i <  num; i++) 
    {
        if (str_sub[i] - 55 >= 10) 
        {
            sum += (str_sub[i] - 55) * pow(num2, i);
        }
        else 
        {
            sum += (str_sub[i] - 48) * pow(num2, i);
        }
    }
    
    std::cout << sum;
}