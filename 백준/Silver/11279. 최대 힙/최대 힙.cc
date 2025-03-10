#include <iostream>
#include <queue>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    std::priority_queue<int> p_que;

    int num, num2;
    std::cin >> num;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        if (num2 == 0) 
        {
            if (!p_que.empty()) 
            {
                std::cout << p_que.top() << "\n";
                p_que.pop();
            }
            else 
            {
                std::cout << p_que.size() << "\n";
            }
        }
        else 
        {
            p_que.push(num2);
        }
    }
}