#include <iostream>
#include <vector>
#include <algorithm>

bool visited[100001];
std::vector<int> graph[100001];
int order[100001];
int cnt = 1;

void dfs(int start) {
    visited[start] = true;
    order[start] = cnt++;

    for (int i = 0; i < graph[start].size(); i++) 
    {
        int x = graph[start][i];
        if (visited[x] == false) dfs(x);
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, num3; 
    std::cin >> num >> num2 >> num3;

    for (int i = 0; i < num2; i++) 
    {
        int node, node2; 
        std::cin >> node >> node2;

        graph[node].push_back(node2);
        graph[node2].push_back(node);
    }
    for (int i = 1; i <= num; i++) if (graph[i].size() > 1) std::sort(graph[i].rbegin(), graph[i].rend());
    dfs(num3);
    for (int i = 1; i <= num; i++)  std::cout << order[i] << "\n";
}