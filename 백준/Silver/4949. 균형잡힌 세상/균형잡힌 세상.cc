#include <iostream>
#include <vector>
#include <string>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::string str;
    while (true) 
    {
        std::getline(std::cin, str);
        if (str == ".") break;
        std::vector<char> vec;

        for (int i = 0; i < str.size(); i++) 
        {
            if (str[i] == '(') vec.push_back(str[i]);

            else if (str[i] == ')')
            {
                if (!vec.empty() && vec.back() == '(') vec.pop_back();
                else
                {
                    vec.push_back(str[i]);
                    break;
                }
            }
            else if (str[i] == '[') vec.push_back(str[i]);

            else if (str[i] == ']') 
            {
                if (!vec.empty() &&vec.back() == '[' ) vec.pop_back();
                else 
                {
                    vec.push_back(str[i]);
                    break;
                }
            }
        }
        if (vec.empty()) std::cout << "yes" << "\n";
        else  std::cout << "no" << "\n";
    }
}