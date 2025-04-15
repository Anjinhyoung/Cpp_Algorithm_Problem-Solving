#include <iostream>
#include <string>

int main() {
    std::string str, str2; std::cin >> str;
    bool minus = false;
    int num = 0;
    for (int i = 0; i <= str.size(); i++) 
    {
        if (str[i] == '-' || str[i] == '+' || str[i] == '\0')
        {
            if (minus == false)
            {
                num += std::stoi(str2);
                str2 = "";
            }
            else
            {
                num -= std::stoi(str2);
                str2 = "";
            }

            if (str[i] == '-') minus = true;

        }
        else str2 += str[i];
    }

    std::cout << num;
}