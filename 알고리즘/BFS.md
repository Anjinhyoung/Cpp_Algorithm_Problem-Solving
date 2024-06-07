# BFS

* 대표적인 그래프 탐색 알고리즘
* 정점들과 같은 레벨에 있는 노드(형제 노드)들을 먼저 탐색하는 방식
* 한 단계씩 내려오면서 해당 노드의 같은 레벨에 있는 노드들을 먼저 순회함


# 그림은 나중에 넣기


```C++
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

std::vector<char> bfs(std::unordered_map<char, std::vector<char>>& graph, char start_node) {
    std::vector<char> visited;
    std::queue<char> need_visit;

    need_visit.push(start_node);

    while (!need_visit.empty()) {
        char node = need_visit.front();
        need_visit.pop();
        
        if (std::find(visited.begin(), visited.end(), node) == visited.end()) {
            visited.push_back(node);
            for (char adjacent_node : graph[node]) {
                need_visit.push(adjacent_node);
            }
        }
    }

    return visited;
}

int main() {
    std::unordered_map<char, std::vector<char>> graph;

    graph['A'] = {'B','C'};
    graph['B'] = {'A', 'D'};
    graph['C'] = {'A', 'G', 'H', 'I'};
    graph['D'] = {'B', 'E', 'F'};
    graph['E'] = {'D'};
    graph['F'] = {'D'};
    graph['G'] = {'C'};
    graph['H'] = {'C'};
    graph['I'] = {'C', 'J'};
    graph['J'] = {'I'};

    std::vector<char> result = bfs(graph, 'A');

    std::cout << "BFS Traversal starting from node 'A': ";
    for (char node : result) {
        std::cout << node << " ";
    }
    std::cout << std::endl;

    return 0;
}


```
