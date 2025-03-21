#include <iostream>
#include <vector>
// dfs로 풀어보기

bool visited[101];
std::vector<int> graph[101];
int cnt = 0;
void dfs(int x) 
{
    visited[x] = true;

    for (int y = 0; y < graph[x].size(); y++) 
    {
        int number = graph[x][y];
        if (visited[number] == false) 
        {
            cnt++;
            dfs(number);
        }
    }
}

int main() {
    
    int num, num2;
    std::cin >> num >> num2;

    for (int i = 0; i < num2; i++) 
    {
        int x, y;
        std::cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    

    dfs(1);

    std::cout << cnt;
}