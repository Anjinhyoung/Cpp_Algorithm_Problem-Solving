#include <iostream>
#include <string>

int count[21];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num; std::cin >> num;

    std::string str; int num2;

    for (int i = 0; i < num; i++)
    {
        std::cin >> str;

        if (str == "add")
        {
            std::cin >> num2;
            count[num2]++;
        }
        else if (str == "remove")
        {
            std::cin >> num2;
            count[num2] = 0;
        }
        else if (str == "check")
        {
            std::cin >> num2;
            if (count[num2] > 0) std::cout << 1 << '\n';
            else std::cout << 0 << '\n';
        }

        else if (str == "toggle")
        {
            std::cin >> num2;

            if (count[num2] > 0) count[num2] = 0;
            else count[num2]++;
        }

        else if (str == "all") for (int j = 1; j <= 20; j++)  count[j]++;

        else for (int j = 1; j <= 20; j++) count[j] = 0;
    }
}