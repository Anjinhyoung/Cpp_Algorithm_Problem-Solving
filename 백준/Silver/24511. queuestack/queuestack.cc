#include <iostream>
#include <deque>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, num3, num4, num5;;
    std::cin >> num;

    // 맨 처음 큐스택을 어떻게 구성할까? ex) 큐? 스택? 이런 식으로
    std::deque<int> dq;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        dq.push_back(num2);
    }

    // 큐스택을 다 채웠으면 그 안의 원소들을 어떤 걸 넣을 것인가
    std::deque<int> dq2;

    for (int i = 0; i < dq.size(); i++) 
    {
        std::cin >> num3;
        if (dq[i] == 1) continue;
        dq2.push_front(num3);
    }

    std::cin >> num4;

    for (int i = 0; i < num4; i++) 
    {
        std::cin >> num5;
        dq2.push_back(num5);
    }

    for (int i = 0; i < num4; i++) 
    {
        std::cout << dq2.front() << " ";
        dq2.pop_front();
    }
}