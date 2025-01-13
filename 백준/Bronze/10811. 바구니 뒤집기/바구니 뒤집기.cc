#include <iostream>
#include <algorithm>

int main() 
{
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int array[101];

    for (int i = 1; i <= 100; i++) 
    {
        array[i] = i;
    }

    int array_count, reception;
    std::cin >> array_count >> reception;

    int input, input2;
    for (int i = 0; i < reception; i++) 
    {
        std::cin >> input >> input2; 
        std::reverse(array + input, array+ input2 +1); // arr의 시작 포인터와 끝 포인터를 전달
    }

    for (int i = 1; i < array_count+1; i++)
    {
        std::cout << array[i] << " ";
    }
}