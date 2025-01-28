#include <iostream>
#include <string>

int main() {
    int array[9][9] = { {0,}, };

    int max = -1, max_row = 0, max_col = 0;

    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++) 
        {
            std::cin >> array[i][j];
            if (max < array[i][j]) 
            {
                max = array[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    std::cout << max << "\n" << max_row + 1 << " " << max_col + 1;
}