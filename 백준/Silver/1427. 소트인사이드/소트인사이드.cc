#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;


    std::sort(str.begin(), str.end());
    std::reverse(str.begin(), str.end());

    for (int i = 0; i < str.size(); i++) 
    {
        std::cout << str[i];
    }
}