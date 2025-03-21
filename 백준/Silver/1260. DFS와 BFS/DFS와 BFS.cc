#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
bool visited_dfs[1001];
std::vector<int> graph_dfs[1001];
bool visted_bfs[1001];
std::vector<int> graph_bfs[1001];

void dfs(int start) 
{
    visited_dfs[start] = true;
    std::cout << start << " ";

    for (int i = 0; i < graph_dfs[start].size(); i++) 
    {
        int  y = graph_dfs[start][i];

        if (visited_dfs[y] == false) dfs(y);
    }
}

void bfs(int start);

int main() {

    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int num, num2, start;
    std::cin >> num >> num2 >> start;

    for (int i = 0; i < num2; i++) 
    {
        int node, node2;
        std::cin >> node >> node2;
        graph_dfs[node].push_back(node2);
        graph_dfs[node2].push_back(node);
        graph_bfs[node].push_back(node2);
        graph_bfs[node2].push_back(node);
    }

    for (int i = 0; i < 1001; i++) 
    {
        if (graph_dfs[i].size() != 0) std::sort(graph_bfs[i].begin(), graph_bfs[i].end());
        if (graph_dfs[i].size() != 0) std::sort(graph_dfs[i].begin(), graph_dfs[i].end());
    }

    dfs(start);
    std::cout << "\n";
    bfs(start);
}

void bfs(int start) {
    
    visted_bfs[start] = true;
    std::queue<int>  que;
    que.push(start);

    while (!que.empty()) 
    {
        std::cout << que.front() << " ";
        int x = que.front();
        que.pop();

        for (int i = 0; i < graph_bfs[x].size(); i++) 
        {
            int y = graph_bfs[x][i];
            if (visted_bfs[y] == false) 
            {
                visted_bfs[y] = true;
                que.push(y);
            }
        }
    }
}