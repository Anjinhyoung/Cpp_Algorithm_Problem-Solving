#include <iostream>
#include <vector>

bool visited[1001];
std::vector<int> graph[1001];
int cnt = 0;
void dfs(int start) {
    visited[start] = true;

    for (int i = 0; i < graph[start].size(); i++) 
    {
        int y = graph[start][i];
        if (visited[y] == false) dfs(y);
    }
}

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2;
    std::cin >> num >> num2;

    for (int i = 0; i < num2; i++) 
    {
        int x, y;
        std::cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    // 아 왜 num을 생각 못 했지...? 

    for (int i = 1; i <= num; i++) 
    {
        if (visited[i] == false) 
        {
            cnt++;
            dfs(i);
        }
    }

    std::cout << cnt;
}