#include <iostream>
#include  <string>


int main() {

    std::string str;
    std::getline(std::cin, str);

    int count = 1;

    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == ' ') 
        {
            count += 1;
        }
    }

    if (str.front() == ' ') count--; 
    if (str[str.length() - 1] == ' ') count--;

    std::cout << count;
}