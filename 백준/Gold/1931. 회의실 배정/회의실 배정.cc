#include <iostream>
#include <queue>

int main() {
    std::ios::sync_with_stdio(false);
    
    std::cin.tie(nullptr);

    int num; std::cin >> num;
    
    // 시간 정보, 회의 넣기
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> time, que;

    for (int i = 0; i < num; i++) 
    {
        int start, end;
        std::cin >> start >> end;
        time.push({ end,start });
    }

    int end = time.top().first;
    que.push(time.top());
    time.pop();

    while (!time.empty())
     {
        if (end <= time.top().second)
        {
            end = time.top().first;
            que.push({ time.top() });
        }
        time.pop();
     }

    std::cout << que.size();
}