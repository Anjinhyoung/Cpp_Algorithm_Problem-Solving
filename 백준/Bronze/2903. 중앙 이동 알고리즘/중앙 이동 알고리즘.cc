#include <iostream>

int main() {
    // 초기 상태
    int first = 2;

    int num;
    std::cin >> num;

    for (int i = 1; i <= num; i++) 
    {
        first = (first * 2 - 1);
    }
    
    std::cout << first * first;
}