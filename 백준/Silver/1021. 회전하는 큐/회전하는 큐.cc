#include <iostream>
#include <deque>

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, num3, cnt = 0;
    std::cin >> num >> num2;

    std::deque<int> dq;

    for (int i = 1; i <= num; i++) dq.push_back(i);

    for (int i = 0; i < num2; i++) 
    {
        std::cin >> num3;

        // 명심해라 원소가 아니라 번호를 기억해라
        int temp = 0;
        for (int j = 0; j < dq.size(); j++) if (dq[j] == num3)  temp = j;

        // 절반보다 작을 경우
        if (temp <= dq.size() / 2) 
        {
            while (true)
            {
                if (dq.front() == num3)
                {
                    dq.pop_front();
                    break;
                }
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }

        else 
        {
            while (true)
            {
                if (dq.front() == num3)
                {
                    dq.pop_front();
                    break;
                }
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }
    }
    std::cout << cnt;
}