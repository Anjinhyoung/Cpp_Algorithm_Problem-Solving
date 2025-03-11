// 데이터의 개수 보다 데이터의 범위가 크지 않을 때 계수 정렬 + 메모리 관련
// vector<int>는 40mb 10,000,000 * 4byte(int) 그래서 vector가 아니라 배열을 쓴다. 
#include <iostream>

int cnt[10001] = { 0, };

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2;
    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        std::cin >> num2;
        cnt[num2]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < cnt[i]; j++)
        {
            std::cout << i << "\n";
        }
    }
}