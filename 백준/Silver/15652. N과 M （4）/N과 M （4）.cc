// 중복 조합
#include <iostream>
int num, num2;
int arr[9];

void dfs(int start, int cnt)
{
    if (cnt == num2) 
    {
        for (int i = 0; i < num2; i++) std::cout << arr[i] << ' ';
        std::cout << '\n';
        return;
    }

    for (int i = start; i <= num; i++) 
    {
        arr[cnt] = i;
        dfs(i, cnt + 1);
    }
}

int main() {
    std::cin >> num >> num2;
    dfs(1, 0);
}