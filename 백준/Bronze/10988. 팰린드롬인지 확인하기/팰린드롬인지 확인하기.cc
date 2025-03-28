#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::string str, str2;
    std::cin >> str;
    str2 = str;

    std::reverse(str.begin(), str.end());

    if (str2 == str) std::cout << 1;
    else std::cout << 0;
}