#include <iostream>
#include <vector>
#include <algorithm>

bool visited[100001];
std::vector<int> graph[100001];
int order[100001];
int cnt = 1;

void dfs(int number) 
{
    visited[number] = true;

    for (int i = 0; i < graph[number].size(); i++) 
    {
        int number2 = graph[number][i];
        if (visited[number2] == false)
        {
            cnt++;
            order[number2] = cnt;
            dfs(number2);
        }
    }
}

int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num, num2, start;
    std::cin >> num >> num2 >> start;

    for (int i = 0; i < num2; i++) 
    {
        int node, node2;
        std::cin >> node >> node2;

        // 양방향 이니까
        graph[node].push_back(node2);
        graph[node2].push_back(node);
    }

    for (int i = 1; i <= num; i++) std::sort(graph[i].begin(), graph[i].end());
    order[start] = cnt;
    dfs(start);

    for (int i = 1; i <= num; i++) std::cout << order[i] << '\n';
}