#include <iostream>
#include <string>

int main() {
    

    int num = 0, num2 = 0;
    std::string str;
    std::string str2;

    std::cin >> num;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2 >> str;
        for (int i2 = 0; i2 < str.length(); i2++) 
        {
            str2.append(num2, str[i2]);
        }
       std::cout << str2 << '\n';
       str2 = "";
    }
}