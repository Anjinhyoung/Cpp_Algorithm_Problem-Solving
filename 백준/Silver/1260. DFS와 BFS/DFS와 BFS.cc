#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>


bool visited_dfs[1001];
std::vector<int> graph_dfs[1001];

void dfs(int start) {
    visited_dfs[start] = true;

    std::cout << start << " ";
    for (int i = 0; i < graph_dfs[start].size(); i++) 
    {
        int y = graph_dfs[start][i];
        if (visited_dfs[y] == false) dfs(y);
    }
}


bool visited_bfs[1001];
std::vector<int> graph_bfs[1001];


void bfs(int start) {
    std::queue<int> que;
    que.push(start);
    visited_bfs[start] = true;

    while (!que.empty()) 
    {
        int x = que.front();
        std::cout << x << " ";
        que.pop();
        
        for (int i = 0; i < graph_bfs[x].size(); i++)
        {
            int y = graph_bfs[x][i];

            // 만약에 방문하지 않았다면
            if (visited_bfs[y] == false)
            {
                que.push(y);
                visited_bfs[y] = true;
            }
        }
    }
}

int main() {
    int num, num2, num3; 
    std::cin >> num >> num2 >> num3;

    for (int i = 0; i < num2; i++) 
    {
        int x, y;
        std::cin >> x >> y;
        // 양방향 간선
        graph_dfs[x].push_back(y);
        graph_dfs[y].push_back(x);
        graph_bfs[x].push_back(y);
        graph_bfs[y].push_back(x);
    }

    for (int i = 0; i < 1001; i++) 
    {
        if (graph_dfs[i].size() > 1) std::sort(graph_dfs[i].begin(), graph_dfs[i].end());
        if (graph_bfs[i].size() > 1) std::sort(graph_bfs[i].begin(), graph_bfs[i].end());
    }

    dfs(num3);
    std::cout << "\n";
    bfs(num3);
}