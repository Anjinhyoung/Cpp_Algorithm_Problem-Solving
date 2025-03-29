#include <iostream>
#include <queue>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num;
    std::cin >> num;
    std::priority_queue<int, std::vector<int>, std::greater<int>> p_q; // 0초과의 양수 값
    std::priority_queue<int> m_q; // 0 미만의 음수 값

    for (int i = 0; i < num; i++) 
    {
        int num2;
        std::cin >> num2;

        if (num2 == 0)
        {
            // 둘 다 원소가 없을 때
            if (p_q.empty() && m_q.empty()) std::cout << 0 << "\n";

            // 양수 값만 존재 할때;
            else if (!p_q.empty() && m_q.empty())
            {
                std::cout << p_q.top() << "\n";
                p_q.pop();
            }

            // 음수 값만 존재 할 때
            else if (p_q.empty() && !m_q.empty())
            {
                std::cout << m_q.top() << "\n";
                m_q.pop();
            }

            // 둘 다 존재할 때
            else
            {
                // ex 2 vs -1 * -3, -1 vs -1 * -1      2 vs -1 * -1
                if (p_q.top() < -1 * m_q.top())
                {
                    std::cout << p_q.top() << "\n";
                    p_q.pop();
                }
                else
                {
                    std::cout << m_q.top() << "\n";
                    m_q.pop();
                }
            }
        }

        else if (num2 < 0)  m_q.push(num2);

        else p_q.push(num2);
    }
}