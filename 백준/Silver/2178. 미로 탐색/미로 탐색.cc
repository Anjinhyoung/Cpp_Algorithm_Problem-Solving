#include <iostream>
#include <vector>
#include <queue>
#include <string>

bool visited[101][101];
int map[101][101];
int num, num2;
int cnt = 1;
int max_row = 0, max_column = 0;
int dist[101][101];

void bfs(int row, int column) 
{
    int rows[4] = { 0,1,0,-1 };
    int columns[4] = { 1,0,-1,0 };

    std::queue<std::pair<int, int>> que;
    que.push({ row, column });

    while (!que.empty()) 
    {
        int row_ = que.front().first;
        int column_ = que.front().second;

        que.pop();

        for (int i = 0; i < 4; i++)
        {
            int nr = rows[i] + row_;
            int nc = columns[i] + column_;

            if (nr <= 0 || nr > num || nc <= 0 || nc > num2) continue;
            
            if (visited[nr][nc] == false && map[nr][nc] == 1) 
            {
                visited[nr][nc] = true;
                que.push({ nr, nc });
                dist[nr][nc] = dist[row_][column_] + 1; // 인접 좌표까지 이동한 거리 저장
            }
        }
    }
}

int main() {
    std::cin >> num >> num2;

    for (int i = 1; i <= num; i++) 
    {
        std::string str; std::cin >> str;
        for (int j = 0; j < str.size(); j++)  if (str[j] == '1') map[i][j + 1] = 1;
    }

    // 무조건 1,1부터 시작해서 이어져서 for문을 쓸 필요가 없다.
    visited[1][1] = true;
    dist[1][1] = 1;
    bfs(1, 1);

    std::cout << dist[num][num2];
}