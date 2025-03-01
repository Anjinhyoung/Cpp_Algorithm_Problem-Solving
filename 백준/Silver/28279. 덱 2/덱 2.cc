#include <iostream>
#include <deque>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, num3;
    std::cin >> num;

    std::deque<int> dq;

    for (int i = 0; i < num; i++) 
    {
        std::cin >> num2;
        if (num2 == 1)
        {
            std::cin >> num3;
            dq.push_front(num3);
        }
        else if (num2 == 2)
        {
            std::cin >> num3;
            dq.push_back(num3);
        }

        else if (num2 == 3)
        {
            if (dq.empty())
            {
                std::cout << -1 << "\n";
            }
            else
            {
                std::cout << dq.front() << "\n";
                dq.pop_front();
            }
        }

        else if (num2 == 4)
        {
            if (dq.empty())
            {
                std::cout << -1 << "\n";
            }
            else
            {
                std::cout << dq.back() << "\n";
                dq.pop_back();
            }
        }

        else if (num2 == 5) std::cout << dq.size() << "\n";

        else if (num2 == 6)
        {
            if (dq.empty()) std::cout << 1 << "\n";
            else std::cout << 0 << "\n";
        }

        else if (num2 == 7) 
        {
            if (dq.empty()) std::cout << -1 << "\n";
            else std::cout << dq.front() << "\n";
        }

        else if (num2 == 8)
        {
            if (dq.empty()) std::cout << -1 << "\n";
            else std::cout << dq.back() << "\n";
        }
        
    }
}