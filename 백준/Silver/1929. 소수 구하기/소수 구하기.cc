#include <iostream>
#include <vector>
int main() {
    int num, num2; std::cin >> num >> num2;
    std::vector<bool> vec(num2+1, true);

    vec[0] = vec[1] = false;

    // 첫 번째 for문에서 i * i는 이미 지워진 애들을 또 지우는 걸 방지해서 연산을 줄이기 위한 조건
    for (int i = 2; i * i <= num2; i++) 
    {
        // 만약에 i = 2일 때
        if (vec[i] == true) 
        {
            // 2의 배수들을 다 false로 바꾼다. 왜? 소수가 아니니까 그런데 2는 제외? 왜? 2는 소수니까
            for (int j = i * i; j <= num2; j += i)
            {
                vec[j] = false;
            }
        }
    }

    // false는 소수가 아니고 true는 소수인 거
    for (int i = num; i <= num2; i++) if (vec[i] == true) std::cout << i << '\n';
}