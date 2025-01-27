#include <iostream>
#include <string>
#include <algorithm>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::string str, str2;
    std::cin >> str;
    str2 = str; // 초기값 저장

    // 바뀐 뒤에도 같은 지 보기
    std::reverse(str.begin(), str.end());

    if (str2 == str) std::cout << 1;
    else std::cout << 0;
}