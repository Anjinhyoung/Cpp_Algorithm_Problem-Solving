#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = " ", str2 = " ", str3 = " ";
    std::getline(std::cin, str);

    std::reverse(str.begin(), str.end());

    str2 = str.substr(0, 3);
    str3 = str.substr(4, 3);
   
    int num = std::stoi(str2);
    int num2 = std::stoi(str3);
        
    if (num > num2) 
    {
        std::cout << num;
    }
    else 
    {
        std::cout << num2;
    }
}