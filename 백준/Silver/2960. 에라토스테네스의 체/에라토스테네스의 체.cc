#include <iostream>
#include <vector>

int main() {
    int num, num2;
    std::cin >> num >> num2;

    std::vector<bool> vec(num + 1, true); // 0 ~ num
    int cnt = 0;

    for (int i = 2; i <= num; i++) {
        if (vec[i]) {
            for (int j = i; j <= num; j += i) {
                if (vec[j]) {
                    vec[j] = false;
                    cnt++;
                    if (cnt == num2) {
                        std::cout << j;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}