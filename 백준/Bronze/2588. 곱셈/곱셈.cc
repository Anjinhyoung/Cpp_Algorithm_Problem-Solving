#include <iostream>
#include <string>

int main() {
    std::string a_s, b_s;
    std::cin >> a_s >> b_s; // std::endl; 꼭 안 써도 되는 구나
    // C++은 강제 형변환 보단 명시적으로 형변환하는 걸 추천하고 그렇게 사용해야 한다.
    std::cout << std::stoi(a_s) * std::stoi(b_s.substr(2, 1)) << std::endl;
    std::cout << std::stoi(a_s) * std::stoi(b_s.substr(1, 1)) << std::endl;
    std::cout << std::stoi(a_s) * std::stoi(b_s.substr(0, 1)) << std::endl;
    std::cout << std::stoi(a_s) * std::stoi(b_s);

    return 0;
}