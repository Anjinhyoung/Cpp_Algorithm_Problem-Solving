#include <iostream>
#include <algorithm>

int main() {

    std::cout.precision(2);
    std::cout << std::fixed;

    unsigned int input, mean = 0, sum = 0;
    float sum2 = 0;
    std::cin >> input;

    float array[1001];

    for (int i = 1; i <= input; i++) 
    {
        std::cin >> array[i];
    }

    int max = *std::max_element(array +1, array + input+1);
   
    for (int i = 1; i <= input; i++)
    {
       array[i] = array[i] / max * 100;
       sum2 += array[i];
    }
    std::cout << sum2 / input;
}