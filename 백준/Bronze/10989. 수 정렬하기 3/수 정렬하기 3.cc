#include <iostream>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    
    // 범위에 비해 입력 값 범위가 너무 작음 계수  정렬
    
    // 계수 정렬도 수 정렬하기가 되는 구나
    int num, num2;
    std::cin >> num;
    int arr[10001] = { 0, };

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        arr[num2]++;
    }

    for (int i = 1; i < 10001; i++) for (int j = 0; j < arr[i]; j++) std::cout << i << "\n";

}