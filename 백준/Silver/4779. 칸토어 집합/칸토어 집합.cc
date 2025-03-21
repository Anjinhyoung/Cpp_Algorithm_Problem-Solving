#include <iostream>
#include <cmath>


void can(std::string& str, int start, int length) {
    if (length <= 1) return;

    int length2 = length / 3;
    int mid = start + length2; // 나중에 1빼기
    
    for (int i = mid; i < mid + length2; i++)
    {
        str[i] = ' ';
    }

    // 왼쪽 오른쪽을 나눠야 한다.

    // 왼쪽은 맞는 거 같아
    can(str, start, length2);

    // 오른쪽 오른쪽이 문젠데
    can(str, mid + length2, length2);
}

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    while (std::cin >> num) 
    {
        int length = std::pow(3, num);
        std::string str(length, '-');
        can(str, 0, length);
        std::cout << str << "\n";
    }
}