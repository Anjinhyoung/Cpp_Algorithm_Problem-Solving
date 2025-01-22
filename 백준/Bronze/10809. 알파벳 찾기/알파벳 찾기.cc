#include <iostream>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    char array[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'
    };

    for (int i = 0; i < 26; i++) 
    {
        int num;
        num = str.find(array[i]);
        std::cout << num << ' ';
    }
}