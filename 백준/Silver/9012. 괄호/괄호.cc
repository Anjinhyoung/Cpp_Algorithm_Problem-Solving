#include <iostream>
#include <string>

int main() {

    int num;
    std::cin >> num;

    std::string str;
    for (int i = 0; i < num; i++) 
    {
        int sum = 0;
        std::cin >> str;
        for (int j = 0; j < str.size(); j++) 
        {
            if (str[j] == '(') 
            {
                sum += 1;
            }
            else 
            {
                if (sum == 0) 
                {
                    sum -= 1;
                    break;
                }
                sum -= 1;  
            }
        }

        if (sum == 0)
        {
            std::cout << "YES" << "\n";
        }
        else
        {

            std::cout << "NO" "\n";
        }
    }
}