#include <iostream>
#include <vector>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int array[100][100] = { {0,}, };
    int array2[100][100] = { {0,}, };

    int num, num2, sum = 0;

    std::cin >> num >> num2;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num2; j++) 
        {
            std::cin >> array[i][j];
        }
        
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            std::cin >> array2[i][j];
        }
    }

    for (int i = 0; i < num; i++) 
    {
        for (int j = 0; j < num2; j++) 
        {
            std::cout << array[i][j] + array2[i][j] << " ";
        }

        std::cout << "\n";
    }
}