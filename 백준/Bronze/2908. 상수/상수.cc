#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::string str, str2;
    int num, num2;

    std::cin >> str >> str2;

    std::reverse(str.begin(), str.end());
    std::reverse(str2.begin(), str2.end());

    num = std::stoi(str);
    num2 = std::stoi(str2);

    if (num > num2) std::cout << num;
    else std::cout << num2;
}