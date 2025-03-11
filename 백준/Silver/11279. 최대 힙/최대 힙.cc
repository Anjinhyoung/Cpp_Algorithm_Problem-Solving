#include <iostream>
#include <queue>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2;
    std::cin >> num;

    std::priority_queue<int> p_q;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        if (num2 == 0)
        {
            if (!p_q.empty())
            {
                std::cout << p_q.top() << "\n";
                p_q.pop();
            }
            else std::cout << 0 << "\n";
        }

        else p_q.push(num2);
    }
}