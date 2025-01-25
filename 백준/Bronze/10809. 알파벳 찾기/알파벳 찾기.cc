#include <iostream>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::string str;
    char alpha[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    std::cin >> str;

    int num;
    for (int i = 0; i < 26; i++) 
    {
        
        std::cout << (int)str.find(alpha[i]) << " ";
    }
}