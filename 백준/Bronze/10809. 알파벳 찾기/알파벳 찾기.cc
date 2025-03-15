#include <iostream>
#include <string>

int main() {

    char alpha[26];

    // 97 + 25 = 100 + 22 = 122

    for (int i = 97; i <= 122; i++)  alpha[i - 97] = char(i);

    std::string str;
    std::cin >> str;

    for (int i = 0; i < 26; i++) 
    {
        if (str.find(alpha[i]) != -1) std::cout << str.find(alpha[i]) << " ";
        else std::cout << -1 << " ";
        
    }
}